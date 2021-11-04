score_list = []   # 4개의 숫자를 담을 빈 리스트 생성, s_s로 설명해주셨지만 의미를 알아보기 쉽게 만들었습니다.
score_sum = 0 
score_avg = 0


# 숫자를 입력받고 int로 형변환을 해준다. 
# 이후 입력 받은 숫자를 append() 함수로 리스트에 추가해준다. ( for문을 사용하면 더 간편하게 가능 )
num = int(input("숫자 입력: "))
score_list.append(num)
num = int(input("숫자 입력: "))
score_list.append(num)
num = int(input("숫자 입력: "))
score_list.append(num)
num = int(input("숫자 입력: "))
score_list.append(num)

# 가독성이 떨어질 수 있지만 아래처럼 변수를 따로 만들지 않아도 사용 가능
# score_list.append(int(input("숫자 입력: ")))


# list에 담긴 숫자를 모두 더한 뒤, 평균을 냅니다. 
score_sum += score_list[0]
score_sum += score_list[1]
score_sum += score_list[2]
score_sum += score_list[3]

score_avg = float(score_sum) / len(score_list)

print("평균: ", score_avg)