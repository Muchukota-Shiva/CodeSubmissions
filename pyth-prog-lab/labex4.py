#question 1

airline=input("input airline name - ")
src=input("input starting point - ")
dest=input("enter destination - ")
pas=input("enter number of pasengers - ")

final=""
ls=[]

if int(pas)>5:
	n=100
	i=int(pas)
	j=0
	while(i>0):
		final=""
		final=airline+":"+src[:3]+":"+dest[:3]+":"+str((n+i))
		ls.append(final)
		i=i-1
		j=j+1
	print("\n")
	for i in ls:
		print(i)
	print("\n")
#
else:
	n=100
	i=1
	j=0
	while(i<int(pas)+1):
		final=""
		final=airline+":"+src[:3]+":"+dest[:3]+":"+str((n+i))
		ls.append(final)
		i=i+1
		j=j+1
	print("\n")
	for i in ls:
		print(i)
	print("\n")

#question 2

n=int(input("enter the number of studs - "))
i=0
scores=[]

while i<n:
	sc=input("enter one score - ")
	scores.append(sc)
	i+=1

scores.sort(reverse=True)
#print(scores)
print("\n",scores[1],"\n")

#question 3

stamps=[]
no=int(input("enter the number of stamps - "))
i=0

while i!=no:
	x=input("enter stamp name - ")
	if x.upper() not in stamps:
		stamps.append(x.upper())
	i=i+1
print(stamps)

print(len(stamps),"is the number of distinct stamps\n")