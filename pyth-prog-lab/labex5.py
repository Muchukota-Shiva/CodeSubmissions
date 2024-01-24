import string
# question 1, store n inpute in dictionary with key as name and value as 3 marks seperated by space

"""n=int(input("enter number of records                     -  "))
d={}

for i in range(n):
	name=input("enter student's name                        - ")
	marks=input("enter the marks obtained seperated by space - ")
	d[name]=marks
	print("\n")
print("\n")


for i in d.keys():
	m=d[i].split()
	sum=0
	avg=0
	for j in m:
		sum+=int(j)
	avg=sum/len(m)
	print(i,avg,"\n")#question says print upto 2 decimal points
	#for k,v in d1.items():
		#print(k,"{0:.2f}".format(np.mean(v)))"""


# question 2

"""def check_baggage(baggage_weight):
	if baggage_weight>=0 and baggage_weight<=40:
		return True
	else:
		return False

def check_immigration(expiry_year):
	if expiry_year>=2030 and expiry_year<=2050:
		return True
	else:
		return False

def check_security(noc_status):
	if noc_status=="valid" or noc_status=="VALID":
		return True
	else:
		return False

def traveler():
	tid  = int(input("enter traveler id    - "))
	tname= input("enter traveler name  - ")
	bw   = int(input("enter baggage weight - "))
	exp  = int(input("enter expiry year    - "))
	noc  = input("enter noc status     - ")
	a,b,c=check_baggage(bw),check_immigration(exp),check_security(noc)

	if a==True and b==True and c==True:
		print("\ntraveler id   -",tid,"\ntraveler name - ",tname,"\n")
		print("Allow Traveler To Fly!\n")
	else:
		print("traveler id   -",tid,"\ntraveler name - ",tname,"\n")
		print("Detain Traveler For Re-checking!\n")

traveler()"""

#question 3

"""st1=input("enter string 1 - ")
st2=input("enter string 2 - ")
comm=[]

if len(st1)>len(st2):
	r=len(st1)
	for i in range(r):
		if st1[i] in st2:
			if st1[i] not in comm:
				comm.append(st1[i])
else:
	r=len(st2)
	for i in range(r):
		if st2[i] in st1:
			if st2[i] not in comm:
				comm.append(st2[i])

for i in comm:
	print(i,end="")"""


# question 4

"""def find_pairs_of_numbers(lst,n):
	j,count=0,0
	for i in lst:
		if i==lst[j]:
			pass
		else:
			j=0
			while j<n:
				if i+lst[j]==n:
					count+=1
				j+=1
	#space
	return count

lst=[1,2,7,4,5,6,0,3]
n=6
print(find_pairs_of_numbers(lst,n))"""


#question 5

# 10 students, marks are out of 25 and the marks are in a tuple

"""def find_more_than_average(tup):#returns percentage
	sum,count=0,0
	for i in tup:
		sum+=i
	avg=sum/10 # total 10 kids given

	for i in tup:
		if i>avg:
			count+=1

	perc=(count/10)*100
	return perc

def generate_frequency(tup):#no return
	freq={}
	tup2=set(tup)
	j=0
	for i in tup2:
		j=0
		while j<len(tup2):
			if i==tup[j]:
				#freq[i]=freq[i]+1
				if i not in freq:
					freq[i]=1
				else:
					freq[i]+=1
			j+=1
	#space
	for key,value in freq.items():
		print(key,":",value)

def sort_marks(tup):        
	lst=list(tup)
	lst.sort()
	return lst


tup=(12,18,25,24,2,5,18,20,20,1)
print("percentage of kids getting more than average is -\n",find_more_than_average(tup))
print("\nthe frequency of marks is -")
generate_frequency(tup)
print("\nthe sorted list of marks is -\n",sort_marks(tup))"""


# question 6

"""def create_largest_number(lst):
	lst.sort(reverse=True)
	num=""
	for i in lst:
		num=num+str(i)
	return num

lst=[23,34,55]
print(create_largest_number(lst))"""


#question 7

def find_ten_substring(num_str):#damn how did i come up with this solution lol
    ten_substr=[]
    for i in range(len(num_str)):
        sum=0
        sub_str=""
        for j in range(i,len(num_str)):
            sum+=int(num_str[j])
            if sum<10:
                sub_str+=num_str[j]
            elif sum==10: # check if somewhere down the line it becomes 10 or not
                sub_str+=num_str[j]
                ten_substr.append(sub_str)
                if (j!=len(num_str)-1): # checking if next number is 0 cuz sum already 10      
                    if (num_str[j+1]=="0"):
                        continue;
                    else:
                        break;
    return ten_substr; 

st="3523014"
print(find_ten_substring(st))
