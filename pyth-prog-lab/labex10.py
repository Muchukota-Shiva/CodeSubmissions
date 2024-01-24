#question 1 
"""class Employee:
	def __init__(self,Firstname,Lastname,pay):
		self.Firstname=Firstname
		self.Lastname=Lastname
		self.pay=pay
		self.email=self.Firstname+self.Lastname+"@company.com"

	def __str__(self):
		return self.Firstname+" "+self.Lastname+" "+str(self.pay)+" "+self.email


emp1=Employee("muchu","shiva",20)
print(emp1)"""

#question 2
class Vehicle:
	def __init__(self,maxs,mil,name,capacity):
		self.max_speed=maxs 
		self.mileage=mil
		self.name=name
		self.capacity=0
	def seating_capacity(self,capacity):
		self.capacity=capacity
		return "seating capacity of "+self.name+" is "+self.capacity+"passengers"

class bus(Vehicle):
	def __init__(self,maxs,mil,name,capacity,color):
		super().__init__(maxs,mil,name,capacity)
		self.color=color#"white"
		self.capacity=50
	#def seating_capacity_(self,capacity):
	#	super().seating_capacity(capacity)
	def __str__(self):
		return str(self.max_speed)+" "+str(self.mileage)+" "+self.name+" "+str(self.capacity)+" "+self.color
	

khatpatiya=bus(100,12,"bus",30,"white")
print(khatpatiya)
#print(seating_capacity_(40))