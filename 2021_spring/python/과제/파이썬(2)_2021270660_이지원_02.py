import random

val = random.randint(1,10)

# print(val)

guess = int(input("1~10 사이의 값을 입력하세요. >> "))

if ( val == guess ) :
    print("정답입니다!")

elif ( val < guess ) :
    print("입력 값보다 큽니다. ") 

else :
    print("입력 값보다 작습니다. ")

print("정답은 %d 이었습니다. " %val )