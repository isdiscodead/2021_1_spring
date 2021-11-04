def max_2( a, b ) :
    if ( a > b ) :
        maxVal = a
    else :
        maxVal = b

    return maxVal


def max_3( a, b, c ) :
    maxVal = max( a, max(b, c) )
    return maxVal


# 사용 예제
print(max_2(4, 19))
print(max_3(2, 0, -2))