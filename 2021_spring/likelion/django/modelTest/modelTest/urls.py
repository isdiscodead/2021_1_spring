"""modelTest URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/3.2/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.contrib import admin
from django.urls import path, include   # include 함수 사용을 위해 import
from blogapp import views
import account 

# media 사용을 위한 import 
from django.conf import settings    
from django.conf.urls.static import static

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.home, name='home'),
    path('blog/', include('blogapp.urls')),
    path('account/', include('account.urls')),
] + static( settings.MEDIA_URL, document_root = settings.MEDIA_ROOT )
# Media 사용을 위해 스태틱을 병렬적으로 더한다. ( 개발할 때 한 번 만들고 복붙해서 쓴당 ㅎㅎ )