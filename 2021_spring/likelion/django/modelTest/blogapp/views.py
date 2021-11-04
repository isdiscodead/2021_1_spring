from django import forms
from django.core import paginator
from django.shortcuts import render, redirect, get_object_or_404 # 객체를 가져오거나 Not found error을 띄운다. 
from django.utils import timezone   # 시간을 가져오기 위한 Timeone 패키지 

# 데이터 베이스를 사용하기 위해 model을 가져온다.
from .models import Blog

# forms
from .forms import BlogForm

# paginator 
from django.core.paginator import Paginator


# --------------------------- READ ---------------------------

def home(request) :
    # DB에 있는 Blog 객체를 싹 다 가져온다 ! 
    blogs = Blog.objects.all()

    # - 는 내림차순 없으면 오름차순
    blogs = Blog.objects.order_by('-pup_date')

    # 필터링	
    search = request.GET.get('search')
    if search == 'true' :
        author = request.GET.get('writer')
        blogs = Blog.objects.filter(writer = author) 
        # .exclude는 제외하고 검색 ! .orderby()도 이어붙일 수 있다. 
        return render( request, 'home.html', {'blogs' : blogs })
        
    # Paginator로 나눠준다.
    paginator = Paginator( blogs, 3 ) 
    page = request.GET.get('page')
    blogs = paginator.get_page(page)

    return render(request, "home.html", {'blogs' : blogs})

def detail(request, id) :
    blog = get_object_or_404(Blog, pk = id ) # pk = Primary Key ( 기본키, 대표 식별자 )
    return render( request, 'detail.html', {'blog' : blog} )


# --------------------------- CREATE ---------------------------
def new(request) :
    form = BlogForm()
    return render( request, 'new.html', {'form' : form} )

def create(request) :
    form = BlogForm(request.POST, request.FILES )
    if form.is_valid() :  # 유효성 검사 통과 시 
        # 임시 저장
        new_blog = form.save(commit=False)
        # 나머지 컬럼인 date 저장 
        new_blog.pup_date = timezone.now()
        # save
        new_blog.save()

    # 새로운 페이지로 넘어가는 것이 아니기 때문에 새 글의 상세 페이지로 redirect
    return redirect('detail', new_blog.id )
 

# --------------------------- UPDATE --------------------------- 
def edit( request, id ) :
    edit_blog = Blog.objects.get(id = id)   # id 값에 해당하는 객체 가져옴
    return render( request, 'edit.html', {'blog' : edit_blog} )

def update( request, id ) :
    update_blog = Blog.objects.get(id = id) 
    
    # id값에 해당하는 객체의 컬럼을 변경
    update_blog.title = request.POST['title']
    update_blog.writer = request.POST['writer']
    update_blog.body = request.POST['body']
    update_blog.pup_date = timezone.now() 
    update_blog.image = request.FILES['image']

    update_blog.save() 

    return redirect('detail', update_blog.id )


# --------------------------- DELETE --------------------------- 
def delete( request, id ) :
    delete_blog = Blog.objects.get(id = id)
    delete_blog.delete()
    return redirect('home')