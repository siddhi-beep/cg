arr=[]
n=int(input("total no. of students:"))
for i in range(n):
    s=int(input("Enter rollno. of students:"))
    arr.append(s)
print(arr)
#stu1=sorted(students)
#print(stu1)
target=int(input("Enter roll no. of students to seach:"))


def binary_search(arr,target):
    arr.sort
    flag=0
    first=0
    last=len(arr)-1
    while first<=last:
        mid=(first+last)//2
        if (arr[mid]==target):
            flag=1
            
        else:
            if arr[mid]>target:
                last=mid-1
            else:
                first=mid+1
    if flag==1:
        return 1
    else:
        return 0
binary_search(arr,target)