students=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p']
crk=['a','e','j','o','n','m']
bad=['b','c','g','l','p','i','a','b','o']
foot=['d','f','h','k','m','n','b','c','l','e']
def union(crk,bad):
    l1=crk.copy()
    for value in bad:
        if value not in crk:
            l1.append(value)
    print("list of students who play cricket or badminten is:",l1)
union(crk,bad)   

def intersection(crk,bad):
    l2=[]
    for value in crk:
        if value in bad:
            l2.append(value)
    print("list of students who play cricket and badmintenboth both are:",l2)    
intersection(crk,bad) 

def ncrknorbad(crk,bad,students):
    l1=crk.copy()
    l2=[]
    for value in bad:
        if value not in crk:
            l1.append(value)
    for value in students:
        if value not in l1:
            l2.append(value)
    print("students who neither play crk nor badminton are:",l2)
ncrknorbad(crk,bad,students)


    
    
    