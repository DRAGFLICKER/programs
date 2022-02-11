a=int(input("enter the starting range:"))
b=int(input("enter the ending range:"))
flag=0
if(a<=1 and b>=1):
	print("1 is prime \n")
for x in range(a,b+1):
	for y in range(1,x):
		if(x%y==0):
			flag=flag+1
	if(flag==1):
		print(x,"is prime \n")
	flag=0