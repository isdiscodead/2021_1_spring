# 덧셈
def add( a, b ) :
    return a + b

# 뺄셈
def sub( a, b ) :
    return a - b

# 곱셈
def mul( a, b ) :
    return a * b

# 나눗셈
def div( a, b ) :
    return a / b


# 사용 예제 ( 10 + 20 * 30 )
result = mul( b=20, a=30 )
result = add( a=10, b=result)
print(result)