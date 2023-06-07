#프로세스(GUI)
#0.현재 날짜
from datetime import datetime
now=datetime.now().date()
print(now)

#1.나이확인
#입력 창 또는 입력 키보드
Birth_year=int(input("출생년도를 입력하세요:", 
))
Birth_month= int(input("출생월을 입력하세요:"))
Birth_day= int(input("출생일을 입력하세요"))


for  year in  range(Birth_year+1):
	print(year)
	if (year%4==0  and (year%100)!=0 and (year%400) == 0):
			print(year ,"is  leap  year")
	else:
			print("Not  leap  year")
	


#2. 신분증 확인 (머신 러닝 )
# 3. 얼굴 확인
