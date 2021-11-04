from django.contrib.auth.forms import UserCreationForm
from .models import CustomUser

class RegisterForm( UserCreationForm ) :
    class Meta : 
        model = CustomUser
        # UserCreationForm에 기본적으로 있는 model과 fields는 상속했기 때문에 사용 가능 
        fields = ['username', 'password1', 'password2', 'nickname', 'location', 'university']