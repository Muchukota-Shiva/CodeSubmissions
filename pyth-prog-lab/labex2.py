#Questions to solve
#1.given an integer n, print weird if odd. if even and within 2-5 print in the inclusive. if range 6-20 print weird. if more the 20 not weird
#2.for an integer n, print squares of all non negative integers
#3.without using strings, print all elements in one line.
#4. from certain conditions print certain things blah blah blah
#5.you have x 5 rupee coins and y 1 rupee couns. calculate lowest amount of coins needed to get the desired amount


#1.
print("q1\n")
n=int(input("enter a number                 - "))
if n%2!=0:
	print("Weird\n")
else:
	if n in range(2,6):
		print("Not Weird\n")
	elif n in range(6,21):
		print("Weird\n")
	elif n>20:
		print("Not Weird\n")

#2.
print("q2\n")
n=int(input("enter a number                - "))
for i in range(0,n):
	print(i**2)
print("\n")

#3.
print("q3\n")
n=int(input("enter a number - "))
for i in range(1,n+1):
	print(i,end="")#default end is \n so replacing it with blank should do the trick
print("\n")

#4.
print("q4\n")
l=[]
n1=int(input("enter number 1               - "))
n2=int(input("enter number 2               - "))
n3=int(input("enter number 3               - "))
l.append(n1)
l.append(n2)
l.append(n3)

if l[1]==7:
	print(l[0]*l[2],"\n")
elif l[0]==7:
	print(l[1]*l[2],"\n")
elif l[2]==7:
	print(-1,"\n")
else:
	print(l[0]*l[1]*l[2],"\n")

#5.
print("q5\n")
x=int(input("enter number of 5 rupee coins - "))
y=int(input("enter number of 1 rupee coins - "))
amt=int(input("enter the ammount to be paid  - "))


cnty=0
cntx=0
cnt=5

while cnt<=amt: # 
	cnt+=5 # the number will go till it crosses amt
	cntx+=1# the number of 5 rupee coins taken to reach that point
cnt-=5 # because cnt got update once time extra
left=amt-cnt
if left<0:
	left*=-1 # -*- makes plus

if y<left:
	print(-1)
else:
	cnty=left
	print("number of 5 rupee coins is",cntx,"and number of 1 rupee coins is",cnty,"\n")