count = int(input())
people = input().split()
menu = int(input())

if menu == 1 : 
    num = input().split()
    for i in range(2) :
        num[i] = int(num[i]) - 1
        
    if ( num[0] != num[1] ) :
        people[int(num[0])], people[int(num[1])] = people[int(num[1])], people[int(num[0])]

    for i in people :
            print(i, end=' ')
    
elif menu == 2 :
    num = int(input()) - 1
    if num == 0  :
        print("x %s" %people[num+1])
    elif num == count-1 : 
        print("%s x" %people[num-1])
    elif num < 0 or num > count-1 :
        print("Out of Range!")
    else :
        print("%s %s" % (people[num-1], people[num+1]))
    

elif menu == 3 :
    num = input().split()
    
    for i in range(2) :
        num[i] = int(num[i]) -1
        
    if ( num[0] != num[1] ) :
        if ( num[0] < 0 or num[0] > count ) :
            print("Out of Range")
        elif ( num[1] < 0 or num[1] > count ) :
            print("Out of Range")
        elif ( num[0] > num[1] ) :
            print("Input Error") 
        else :
            for i in range( int((num[1] - num[0] +1)/2) )  :
                people[num[0]+i], people[num[1]-i] = people[num[1]-i], people[num[0]+i]
            for i in people :
                print(i, end=' ')
    else : 
        for i in people :
            print(i, end=' ')
