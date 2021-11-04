import random

# 주사위를 1000번 던져서 각 숫자가 나올 확률을 구하는 프로그램을 작성하시오. ( random 모듈 사용 )

# 변수 선언
count = [0, 0, 0, 0, 0, 0]

# 주사위 던지기
for i in range(1000) :
    select = random.randint(1,6)
    count[select-1] += 1

# 확률 구해서 출력
for cnt in count :
    print("주사위가 %d일 확률은 %f"%(count.index(cnt)+1, cnt/1000))
