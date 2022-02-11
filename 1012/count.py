string=input("enter the string :")
c=0
v=0
qm=0
w=0
for i in string:
	if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u'):
		v=v+1
	elif(i==' '):
		w=w+1
	elif(i=='?'):
		qm=qm+1
	else:
		c=c+1
print('vowels=',v)
print('words=',w)
print('consonents=',c)
print('qm=',qm)
