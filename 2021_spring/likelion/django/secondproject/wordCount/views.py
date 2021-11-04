from django.shortcuts import render

def home(request) :
    return render(request, "home.html")

def result(request) :
    sentence = request.GET["sentence"]

    # split() : 문자열을 설정한 기준을 기준으로 쪼개준다. 기본값 공백
    wordList = sentence.split()

    # 각 단어 별로 구분하기 위해 dictionary 사용, 개수는 len() 사용 !!
    wordDict = {}

    for word in wordList :
        if word in wordDict :
            wordDict[word] += 1
        else : 
            wordDict[word] = 1 

    return render(request, 'result.html', 
    { "fullText" : sentence , "wordDict" : wordDict.items , 'count' : len(wordList)})