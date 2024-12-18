stu=[]
x=int(input("Enter total number of students:"))
for i in range (x):
    y=int(input("Enter rollnumber of students:"))
    stu.append(y)
print(stu)

#arr1=sorted(arr)
#print(arr1)
roll=int(input("Enter rollno. to search:"))

print("Select choice:")
print("1.linear search")
print("2.binary search")
ch=int(input("Enter choice:"))

def linear_search(arr,target):
    flag=0
    #target=int(input("Enter rollno. to search:"))
    for i in range(len(arr)):
        if target==arr[i]:
            flag=1
            break
    if flag==1:
        print("Rollnumber found")
    else:
        print("Roll no. not found")

def binary_search(arr,target):
    arr.sort()
    first=0
    last=len(arr)-1
    flag=0
    while(first<=last):
        mid=first+last//2
        if arr[mid]==target:
            flag=1
        else: 
            if arr[mid]>target:
                last=mid-1
            else:
                first=mid+1
    if flag==1:
        print("Found")
    else:
        print("Not found")




if(ch==1):    
    linear_search(stu,roll)

if(ch==2):
    binary_search(stu,roll)

        
        






   



        

    


