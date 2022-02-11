list1=[]
n=int(input("enter the length of list \n"))
for i in range(0,n):
	a=input("enter the element\n")
	list1.append(a)
print(list1)
a=input("enter the element to be searched \n")
for i in range (0,n):
	if(list1[i]==a):
		print("element found at ",i+1)