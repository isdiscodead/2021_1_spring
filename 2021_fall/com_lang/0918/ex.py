def solution(answers):
    answer = []
    count = [0, 0, 0]
    
    # 찍는 규칙을 찾아 각각의 배열 생성
    an1 = [1, 2, 3, 4, 5]
    an2 = [2, 1, 2, 3, 2, 4, 2, 5]
    an3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    
    # 예외 처리 ( 문제가 아예 없을 경우 )
    if not answers :
        return [1, 2, 3]
    
    # 정답 개수 세기
    i = 0
    for an in answers:
        if( an1[i%5] == an ) : 
            count[0] += 1
        if( an2[i%8] == an ) :
            count[1] += 1
        if( an3[i%10] == an ) :
            count[2] += 1
        i += 1
        
    # 최다 정답자 찾기 
    max_ans = max(count)
    print(max_ans)
    
    if( count[0] == max_ans ) :
        answer.append(1)
    if( count[1] == max_ans ) :
        answer.append(2)
    if( count[2] == max_ans ) :
        answer.append(3)
    
    return answer