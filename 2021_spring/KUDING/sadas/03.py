sentence = input("")
keyword = input("")
result = ""

for i in sentence :
    if ( 'a' <= i and i < 'z' ) :
            result += i.upper()
    elif ( 'A' <= i and i < 'Z' ) :
            result += i.lower()
    else :
        result += i
    
idx = sentence.find(keyword)
print(idx)

if keyword in sentence :
    print(idx)

    if len(keyword) >= 4 :
        idx += len(keyword)
        result = result[:idx] + "Funny!" + result[idx:]
    print(result)

else :
    print("Not Found!")
