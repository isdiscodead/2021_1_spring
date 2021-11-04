from django.shortcuts import render

def welcome(request) :   # request : 자동으로 적어주는 약속 같은 것 
    # welcome 함수가 호출되면 render() 함수를 통해 welcome.html을 보여준다. 
    return render(request, "welcome.html")

def hello(request) :
    # welcome.html의 'name'이라는 이름의 input 값을 가져온다.
    userName = request.GET['name']

    # 세 번째 인자에 넘겨줄 값을 딕셔너리로 넣어준다. 
    return render( request, "hello.html", {'userName' : userName} )