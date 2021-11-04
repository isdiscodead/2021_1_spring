"""firstproject URL Configuration

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
from django.urls import path

# views.py 내의 함수를 사용할 수 있도록 import 해온다. 
from firstapp import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.welcome, name="welcome"), # 빈 주소 ''는 첫 페이지를 뜻한다. 세 번째 인자는 name이다. 
    path('hello', views.hello, name="hello"), 
]
