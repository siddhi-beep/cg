str1=input("Enter string")
list1=str1.split()
str2=str1[::-1]
if(str1==str2):
    print("Given string is palindrom")
else:
    print("string is not palindrom")

count=dict()
list1=str1.split()
for word in list1:
    if word in count:
        count[word]+=1
    else:
        count[word]=1
print (count )               
