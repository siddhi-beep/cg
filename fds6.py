#students=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p']
#crk=['a','e','j','o','n','m']
#bad=['b','c','g','l','p','i','a','b','o']
#foot=['d','f','h','k','m','n','b','c','l','e']

students=input("enter students name:")
list1=students.split()
crk1=input("enter students name:")
crk2=crk1.split()
foot1=input("enter students name:")
foot2=foot1.split()
bad1=input("enter students name:")
bad2=bad1.split()
print("Enter choice:")
print("1.either crk or bad")
print("2. crk and foot not bedminten")    
ch=input("enter choice")

def ecrkorbad(crk,bad):
    l1=crk.copy()
    l2=[]
    result=[]
    for value in bad:
        if value not in crk:
            l1.append(value)
    
    for value in crk:
        if value in bad:
            l2.append(value)

    for value in l1:
        if value not in l2:
            result.append(value)
    print("students who either play crk or badmintonbut not both are:",result)



def crkandfootbnbad(crk,foot,bad):
    l2=[]
    result=[]
    for value in crk:
        if value in foot:
            l2.append(value)
    for value in l2:
        if value not in bad:
            result.append(value)
    print("students who play cricket and football but not badminton are:",result)


if ch==1:
    first=ecrkorbad(crk2,bad2)
    print(f"{first}")
        
if ch==2:
    final=crkandfootbnbad(crk2,foot2,bad2)  
    print(f"crk and football:{final}")
       
        

    

