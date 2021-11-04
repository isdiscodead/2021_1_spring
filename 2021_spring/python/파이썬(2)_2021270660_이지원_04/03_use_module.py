import cals

# 우선 순위를 무시하는 30+10/5*10의 결과 ( 모듈 사용 )
result = cals.add(30, 10)
result = cals.div(result, 5)
result = cals.mul(result, 10)

print(result)