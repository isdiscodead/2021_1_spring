# 문제 1 
sum = 0 
while ( sum < 1001 ) :
    sum += 1

# 문제 2 
i = 1 
sum = 0
for i in range( 10000 ) :
    if ( sum < 10000 ) :
        sum += i
    else :
        break
    
print(sum)

i=1
sum =0
while sum < 10000:
    sum=sum+i
    i+=1

print(sum);