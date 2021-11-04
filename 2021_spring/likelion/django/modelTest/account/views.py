from typing import Awaitable
from django.shortcuts import redirect, render

# 로그인, 회원가입 폼 
from django.contrib.auth.forms import AuthenticationForm, UserCreationForm

# 인증 및 로그인
from django.contrib.auth import authenticate, login, logout

# 유저 확장
from .forms import RegisterForm

def login_view( request ) :

    if request.method == 'POST' :
        form = AuthenticationForm( request = request, data = request.POST )
        if form.is_valid() :    # 유효성 검사
            # username이라는 cleandata( 검사 통과된 데이터 )를 가져옴
            username = form.cleaned_data.get("username") 
            password = form.cleaned_data.get("password")

            # 인증을 받을 user 객체를 만든다. 
            user = authenticate( request=request, username=username, password=password )

            # user가 존재할 경우 로그인
            if user is not None :
                login( request, user )

        return redirect("home")

    else : 
        form = AuthenticationForm()
        return render( request, 'login.html', {"form" : form})


def logout_view( request ) :
    logout( request )
    return redirect("home")

#################### register ####################

def register_view( request ) :
    if request.method == "POST" :
        form = RegisterForm( request.POST )

        if form.is_valid() :
            user = form.save()
            login( request, user )
            
        return redirect('home')

    else :
        form = RegisterForm()
        return render( request, 'signup.html', {'form' : form} )