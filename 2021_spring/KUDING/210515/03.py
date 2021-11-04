# 가위바위보 카드 수량(s, r, p)과 카드 입력
input_str = input()
amount = input_str.split()

for i in range(3) :
    amount[i] = int(amount[i])

card = amount[3]

def error(amount, card) :     # Error 처리
    if amount[0] > 10 or amount[1] > 10 or amount[2] > 10 :
        print("ERROR")
        return 0

    if amount[0]+amount[1]+amount[2] == 10 :
        if amount[0]==10 or amount[1]==10 or amount[2]==10 :
            print("ERROR")
            return 0

    if card == 's' and amount[0] == 0 :
        print("ERROR")
        return 0
    elif card == 'r' and amount[1] == 0 :
        print("ERROR")
        return 0
    elif card == 'p' and amount[2] == 0 :
        print("ERROR")
        return 0
    
    if card != 's' and card != 'r' and card != 'p' :
        print("ERROR")
        return 0
    
    return 1

if error(amount, card) :
    
    if card == 's' :
        card = 0
    elif card == 'r' :
        card = 1
    else :
        card = 2

    if card == 0 :
        if amount[2] > amount[1] :
            print("진환")
        elif amount[2] == amount[1] :
            print("같음")
        elif amount[2] < amount[1] : 
            print("승원")

    elif card == 1 :
        if amount[0] > amount[2] :
            print("진환")
        elif amount[0] == amount[2] :
            print("같음")
        elif amount[0] < amount[2]: 
            print("승원")

    else :
        if amount[1] > amount[0] :
            print("진환")
        elif amount[1] == amount[0] :
            print("같음")
        elif amount[1] < amount[0] : 
            print("승원")
