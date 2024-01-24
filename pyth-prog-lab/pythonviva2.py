#exp 10,11 question 1
#exp 9 question 1

n=int(input("enter number of entries - "))
for i in range(n):
	try:
		x=input("")
		x2=x.split()
		a,b=int(x2[0]),int(x2[1])
		print(a/b)
	except ZeroDivisionError:
		print("Error Code: integer division or module by zero")
	except ValueError:
		print("Error Code: invalid literal for int() with base 10: '$'")
	else:
		#print(a/b)
		pass

print("\n\n\n\n\n\n")

class Employee:
	def __init__(self,Firstname,Lastname,pay):
		self.Firstname=Firstname
		self.Lastname=Lastname	
		self.pay=pay
		self.email=self.Firstname+self.Lastname+"@company.com"

	def __str__(self):
		return self.Firstname+" "+self.Lastname+" "+str(self.pay)+" \n"+self.email


emp1=Employee("Mohandas","Gandhi",5000)
print("\n\n",emp1)
