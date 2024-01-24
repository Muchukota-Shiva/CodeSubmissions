#question 1ē
n=int(input("enter number of entries - "))
for i in range(n):
	try:
		x=input("")
		x2=x.split()
		a,b=int(x2[0]),int(x2[1])
#for i in range(n):
#	x,y=int(input()),int(input())
		print(a/b)
	except ZeroDivisionError:
		print("Error Code: integer division or module by zero")
	except ValueError:
		print("Error Code: invalid literal for int() with base 10: '$'")
	else:
		pass

#question 2
mylist=[1,2,3,"4",5]
sum=0
for i in mylist:
	try:
		sum=sum+i 
		print(sum)
		print(mylist[5])
	except TypeError:
		print("impropper value")
	except IndexError:
		print("impropper index")

#question 3
try:
	f1=open("D:\iofiles\TestFile1.txt","r")
	x=f1.read() # x will be containing whatever
	f1.close()

	y=""
	y=x.replace('"','\\"')

	f2=open("D:\iofiles\TestFile2.txt","w")
	f2.write(y)
	f2.close()
except IOError:
	print("file input/output error")
except NameError:
	print("wrong name")
else:
	print("no error")

#question 4
try:
	x=int(input("enter a number"))
	y=input("enter another number")
	print(x+y)
	y=int(y)
	x=open("pciture.txt","r")
	y=[1,2,3,4]
	print(y[6])
except TypeError:
	print("type eror")
except ValueError:
	print("Vlue error")
except IOError:
	print("input out error")
except IndexError:
	print("index error")
 