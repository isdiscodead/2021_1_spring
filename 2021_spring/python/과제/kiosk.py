# 음료 키오스크 만들기
# 1. 음료 메뉴 출력 
# 2. 전체 다 고르고 주문 버튼 선택시 총합 금액을 출력
# 3. 받은 금액 입력 받아 계산하고 거스름돈 출력

menu = [ "자스민 그린티", "우롱티", "타로 밀크티", "제주 그린 밀크티", "치즈폼 딥초코 스무디", 
        "브라운슈가 쥬얼리 밀크티", "카페라떼", "청포도 그린티" ]
price = [ 3500, 3500, 4000, 4700, 5300, 5300, 4000, 4300 ]

select = 1  # 선택 메뉴
cart = []       # 장바구니 ( 고른 메뉴 )


##### 전체 메뉴 출력 함수 #####
def print_menu() :
    for i in range(len(menu)) :
        for j in range(len(price)) :
            if (  i == j ) :    # 해당하는 가격일 때만 출력
                print("%d. %s : %d원" %(i+1, menu[i], price[j]))

    print("===============================================")



##### 메뉴 선택 받기 함수 #####
def menu_sel() :
    select = 1  # 선택 메뉴 초기화
    cart = []   # 장바구니 비우기

    while ( select > 0 ) :
        select = int(input("숫자로 메뉴를 선택해주세요.\n( 음수 입력 시 종료, 0 입력 시 결제 진행 )\n>> "))
        
        if ( select <= 0 ) :    # 취소 또는 구매 확정 시 while문 종료
            break
        elif select <= ( len(menu)+1 ) :
            cart.append(price[select-1])
            continue
        else : 
            print("입력 오류입니다. 다시 입력해주세요. ")
            continue
    

    # 주문 완료 / 주문 취소 판별
    if ( select < 0 ) : # 취소 되었을 경우 초기 화면으로 돌아간다 
        print_menu()
        menu_sel()
        
    else :  # 그 외의 경우 ( 0인 경우 ) 결제 진행
        
        price_tot = 0   # 총 금액
        price_in = 0    # 받은 금액
        price_out = 0   # 거스름 돈

        print("주문하신 내역은 아래와 같습니다. ")
        print(cart)
        
        # 총 금액 출력
        for money in cart :     
            price_tot += money    
        print("총 금액 : ", price_tot)

        # 받을 금액 입력 받고 거스름돈 계산
        while ( price_out == 0 ) :
            
            price_in = int(input("투입하실 금액을 입력해주세요: "))

            if ( price_in < price_tot ) :
                print("금액이 부족합니다. 다시 입력해주세요.")
                continue
            else :
                price_out = price_in - price_tot
                print("거스름 돈 ", price_out, "원 입니다. 감사합니다. ")
                break

# 함수 호출
print_menu()
menu_sel()
