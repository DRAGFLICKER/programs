list=[]
n=int(input("enter the number of element:"))
i=0
for i in range (0,n):
	num=int (input("enter the list element"))
	list.append (num)
print(list)
sum=0
for i in range(0,n):
	sum=sum+(list[i])
avg=sum/n
print ("average is", avg)
for i in list:
	sqr=i*i
	print("the square is",sqr)