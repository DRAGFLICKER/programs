def fact(n):
	res=1
	for x in range(2,n+1):
		res=res*x
	return res
def ncr(n,r):
	print(fact(c)/(fact(r)*fact(c-r)))
c=int(input("enter the N\n"))
r=int(input("enter the R\n"))
ncr(c,r)
