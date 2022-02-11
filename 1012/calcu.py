def add(P,Q): 
	return P+Q
def subtract(P,Q): 
	return P-Q 
def multiply(P,Q): 
	return P*Q 
def divide(P,Q): 
	return P/Q 
def remainder(P,Q): 
	return P%Q 
def exponent(P,Q):
	return P**Q 
print ("Please select the operation.") 
print ("a. Add") 
print ("b. Subtract") 
print ("c. Multiply") 
print ("d. Divide") 
print ("e. Remainder") 
print ("f. Exponent") 
choice = input("Please enter choice (a/ b/ c/ d/ e): ")

P = int (input ("Please enter the first number: ")) 
Q = int (input ("Please enter the second number: ")) 
if choice == 'a': 
	print ("result= " ,add(P,Q)) 
elif choice == 'b': 
	print("result= ",subtract(P,Q)) 
elif choice == 'c': 
	print ("result= ",multiply(P,Q)) 
elif choice == 'd': 
	print ("result= ",divide(P,Q)) 
elif choice == 'e': 
	print ("result= ",remainder(P,Q)) 

