#questions to solve - 
print("questions to solve are \n\
	1. even or odd\n\
	2. largest, second largest, smallest, second smallest\n\
	3. tell if even odd with less than or more than 10\n")

#1.
print("q1\n")
num = int(input("enter value to check - "))
if num%2==0:
	print(num,"is even\n")
else:
	print(num,"is odd\n")

#2.
print("q2\n")
n1 = int(input("enter first number  - "))
n2 = int(input("enter second number - "))
n3 = int(input("enter third number  - "))

if n1>n2 and n1>n3:
	if n2>n3:
		print("the largest number is",n1,"second largest is",n2,"smallest is",n3,"\n")
	elif n3>n2:
		print("the largest number is",n1,"second largest is",n3,"smallest is",n2,"\n")
elif n2>n3 and n2>n1:
	if n1>n3:
		print("the largest number is",n2,"second largest is",n1,"smallest is",n3,"\n")
	elif n3>n1:
		print("the largest number is",n2,"second largest is",n3,"smallest is",n1,"\n")
elif n3>n2 and n3>n1:
	if n2>n1:
		print("the largest number is",n3,"second largest is",n2,"smallest is",n1,"\n")
	elif n1>n2:
		print("the largest number is",n3,"second largest is",n1,"smallest is",n2,"\n")

#3.
print("q3\n")
num_ = int(input("enter value to check - "))
if (num_%2==0 and num_<10):
	print(num_,"is even and less than 10")
elif (num_%2==0 and num>=10):
	print(num_,"is even and more than 10")
elif (num_%2!=0 and num_<10):
	print(num_,"is odd and less than 10")
elif (num_%2!=0 and num_>=10):
	print(num_,"is odd and more than 10")