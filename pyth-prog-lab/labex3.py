#question 1
str1=input("enter a string - ")# wrong, ask yash for his logic
a=input("enter a substring - ")
print("the substring appeared",str1.count(a),"times\n")# count function counts number of times a substring occurs

#question 2
name=input("enter a name ")
x=name.split()# this will split it into 3 strings
fname=x[0]# first name
mname=x[1]# mid name
lname=x[2]# last name
print(fname[0],".",mname[0],". ",lname.capitalize(),sep="")#sep = "" so that words stick together
print("\n")

#queston 3
str3=input("enter a string - ")
str3_2=str3.upper()
freq={}
for i in str3_2:
	freq[i]=str3_2.count(i)
for i in freq.keys(): # will fetch keys from the dictionary 
	print(freq[i],i,sep="")#sep = "" so that words stick together
print("\n")

#question 4
str4=input("enter a string - ")
if len(str4)<2:
	print("Empty String")
elif len(str4)==2:
	print(str4,str4,sep="")#sep = "" so that words stick together
else:
	x=len(str4)
	print(str4[0:2],str4[x-2:],sep="")#sep = "" so that words stick together
print("\n")

#question 5
song="JINGLE Bells jinle Bells jingle All the Way"
song.upper()
song_words=song.split()
count=0
for word in song_words:
	if(word.startswith("jingle")):
		count+=1
print(count)
print("\n")

#question 6
c1,c2=0,0#to count both the thingy

lst=["Hat","Cat","Rabbit","Matter"]
print(lst)
for i in lst:
	if i.count("at")>0:#anythgin can be at side so this should do it
		c2+=1

	start=i.startswith("at")
	end=i.endswith("at")

	if end==True and start!=end: #now if it ends with at it is fine but start it cannot. 
		c1+=1                   # if it ends with at and doesnt start with it too i am good

print("_at ->",c1)
print("%at%",c2)
print("\n")

#question 7
str7=input("enter a string - ")
lon=""
str7_2=str7.split()# now i have a lost of substrings
for i in str7_2:
	if len(i)>len(lon):
		lon=i#this will replace smaller word with longer :)

print(lon,"is the longest word\n")

#question 8
str8=input("enter a string - ")
str8_2=str8.lower()
freq={}

for i in str8_2:
	if str8_2.count(i)>1:
		freq[i]=str8_2.count(i)

for i in freq.keys():
	print(freq[i],i,sep="")
print("\n")

#question 9


def subseq(st1,st2): # removed upper section as i will have to do this for everysubstring
	i,j=0,0 # for loop

	x,y=len(st1),len(st2)

	while(i<x and j<y):# run till lenght of string, and make sure j is less than lenght of substring
		if(str9[j]==str9_2[i]):#check element wise
			j+=1
		i+=1

	if j==m: # that is all elements of substring are in string
		flag=1

	return flag

def func(d,st1):
	l=0
	final=""

	for x in d:
		if l<len(x) and subseq(x,st1)==1: #if flag is 1 then it is like saying true. it is a subsequence
			final=x
			l=len(x)

	return final

d=["ale","apple","monkey","plea"]
str9="abpcplea"
output=func(d,str9)
print(output)

#question 10

S="zxvcbtxyzvy"
rep=""
d={}
i=0
while i<len(S):
	if S[i] not in d:
		d[S[i]]=1
	else:
		d[S[i]]+=1
	i+=1

for x,y in d.items():
	if y==1:
		print(x)
		break

""" question 9 by sir method
list1=["ale", "apple", "monkey", "plea"]



str2="abpcplea"



list2=[]

final=""

max=len(list1[0])

for str1 in list1:

  i=0

  j=0



  while(i<len(str1) and j<len(str2)):

    if(str1[i]==str2[j]):

      i+=1

      j+=1

    else:

      j+=1

  if(i==len(str1)):

    if(max<=len(str1)):

      final=str1

      max=len(str1)



print(final)
"""