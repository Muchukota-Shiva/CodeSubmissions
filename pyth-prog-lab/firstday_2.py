print("questions to solve \n\
	1. prime\n\
	2. factorial\n\
	3. armstrong\n\
	4. sum of difit\n\
	5. reverse digit\n")

#1
print("q1\n")
n=int(input("enter a value - "))
for x in range(2,n):
	if n%x==0:
		print(n,"is not a prime number\n")
		break
	else:
		print(n,"is a prime number\n")
		break

#2
print("q2\n")
def fact(number):
	if number==1 or number==0:
		return 1
	else:
		return number*fact(number-1)

n2=int(input("enter a value - "))
print("factorial is",fact(n2),"\n")

#3
print("q3\n")
n3=int(input("enter a value - "))
sum_=0
og=n3
while n3>0:
	last=n3%10
	sum=last*last*last
	n3=n3//10
if sum==og:
	print("armstrong\n")
else:
	print("not armstrong\n")

#4
print("q4\n")
n4=int(input("enter a value - "))
sum=0
st_n4=str(n4)
for i in range(len(st_n4)):
	rem=n4%10
	sum=sum+rem
	n4=n4//10
print(sum,"\n")

#5
print("q5\n")
n5=int(input("enter a value - "))
sum,rev=0,0
st_n5=str(n5)
for i in range(len(st_n5)):
	rem=n5%10
	rev=rev*10+rem
	n5=n5//10
print(rev,"\n")