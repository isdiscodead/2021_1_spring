from django.db import models
# 유저 확장을 위한 클래스 AbstractUser
from django.contrib.auth.models import AbstractUser

class CustomUser(AbstractUser) :
    nickname = models.CharField( max_length=100 ) 
    university = models.CharField( max_length=50 )
    location = models.CharField( max_length=200 )
