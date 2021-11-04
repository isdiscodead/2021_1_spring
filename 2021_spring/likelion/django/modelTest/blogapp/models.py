from django.db import models
from django.db.models.base import Model

class Blog(models.Model) : # 상속 : models.Model의 속성을 그대로 사용 !
    # Model 클래스를 상속 받았기 때문에 idx 컬럼은 자동으로 생성된다. 
    title = models.CharField(max_length=200)    # CharField : 제한이 있는 문자형
    writer = models.CharField(max_length=100)
    pup_date = models.DateTimeField()
    body = models.TextField()

    # 이미지 컬럼 추가
    # upload_to = 업로드할 폴더를 지정하는 파라미터, settings.py에서 지정한 폴더에 blog 폴더 생성
    # 빈 값을 넣을 수 있도록 blank = True, null = True 속성도 지정해준다. 
    image = models.ImageField( upload_to = 'blog/', blank=True, null=True)

    def __str__(self):
        # 글의 제목(title)으로 DB내의 오브젝트 이름이 생성되게 만드는 함수
        return self.title

    # 100자 넘어가는 본문 글은 뒷부분 안 나오게
    def summary(self) :
        return self.body[:100]  # 문자열 슬라이싱 ( 0 ~ 100 )