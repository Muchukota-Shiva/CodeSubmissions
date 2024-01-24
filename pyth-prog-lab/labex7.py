# question 1

"""
f1=open("D:\iofiles\TestFile1.txt","r")
x=f1.read() # x will be containing whatever
f1.close()

y=""
y=x.replace('"','\\"')

#space
f2=open("D:\iofiles\TestFile2.txt","w")
f2.write(y)
f2.close()
"""

# question 2


#f1=open("D:\iofiles\rhyme.txt","r") wrong because \r is an escape sequence
f1=open("D:\iofiles\ghyme.txt","r")
x=f1.read()
y=x.split()# uses space as delimeter so gets all words
cnt=len(y) # counts everything
print(cnt,"is the number of characters \n\n")
f1.close()

d={}
for i in y:
	if i not in d:
		d[i]=1
	else:
		d[i]+=1

for key,val in d.items():
	print(key,"--",val)	

f1=open("D:\iofiles\words.txt","w")
f1.write(str(d))
f1.close()



#question 3

"""
f1=open("D:\iofiles\city.txt","r")
x=f1.readlines()
print("the details of all cities are as follows - ")
for i in x:
	print(i)
#space
print("the cities with population more than 10k is - ")
for i in x:
	j=i.split()
	if(float(j[1])>10.00):
		print(j[0])
#space
print("\nthe sum of areas of all cities are - ")
sum=0.0
for i in x:
	j=i.split()
	sum+=float(j[2])
print(sum)
f1.close()
"""
