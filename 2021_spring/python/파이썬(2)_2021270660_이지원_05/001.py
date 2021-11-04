# 숫자 5개를 입력 받아 리스트에 저장하고 저장된 숫자의 평균을 계산하는 프로그램을 작성하시오. 

# 리스트 변수 선언 및 입력
arr = []
sum = 0

for i in range(5) :
    num = int(input("정수를 입력하시오 : "))
    arr.append(num)

# 합산, 평균을 구해서 출력한다.
for num in arr :
    sum += num

avg = sum/len(arr)
print("평균 = %d" %avg)
