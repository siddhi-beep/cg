str1=input("Enter string:")
list1=str1.split()
print(list1)
print("1.longest word")
print("2.count number of times a character occurs")
print("3.substrings index")
ch=int(input("Enter choice"))
if ch==1:
    x=0
    word=0
    for i in range(len(list1)):
        if len(list1[i])>x:
            x=len(list1[i])
            word=i
    print("longest word is:",word,"and length is:",len(list1[word])) 
if ch==2:
    char=input("Enter character")
    count=0
    for i in range(len(str1)):
        if char==str1[i]:
            count+=1
    print("character",char,"ocurred:",count,"times")     
if ch==3:
    str2=input("Enter substring")
    index=0
    y=0
    x=0
    for i in range(len(str1)):
        if str2[y]==str1[i]:
            y=y+1
            
            if(y==len(str2)):
                index=i-(len(str2)-1)
                break
    print("index of substring is:",index)


        


     
    
        
       
       


