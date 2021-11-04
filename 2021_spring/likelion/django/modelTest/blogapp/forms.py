from django import forms
from django.db import models
from django.forms import fields
from .models import Blog

class BlogForm( forms.ModelForm ) :
    
    # 메타 클래스는 일종의 이름표 역할을 한다 ! 
    class Meta :    
        model = Blog
        fields = { 'title', 'writer', 'body', 'image' }