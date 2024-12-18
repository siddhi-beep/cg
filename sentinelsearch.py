def sentinel_search(arr,target):
    last=arr[-1]
    arr[-1]=target
    i=0
    while arr[i]!=target:
        i+=1
    print("found")

arr=[]
n=int(input("total no. of students:"))
for i in range(n):
    s=int(input("Enter rollno. of students:"))
    arr.append(s)
print(arr)
target=int(input("Enter roll no. of students to seach:"))
sentinel_search(arr,target)
