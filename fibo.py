arr=[]
n=int(input("total no. of students:"))
for i in range(n):
    s=int(input("Enter rollno. of students:"))
    arr.append(s)
print(arr)
#stu1=sorted(students)
#print(stu1)
target=int(input("Enter roll no. of students to seach:"))

def fibo_searcg(arr,target):
    arr.sort()
    n=len(arr)
    fib2=0
    fib1=1
    fib=fib2+fib1
    offset=-1
    while(fib<n):
        fib2=fib1
        fib1=fib
        fib=fib2+fib1
    while(fib>1):
        i=min(offset+fib2,n-1)
        if(arr[i]<target):
            fib=fib1
            fib1=fib2
            fib2=fib-fib1
            offset=i
        elif(arr[i]>target):
            fib=fib2
            fib1=fib1-fib2
            fib2=fib-fib1
            offset=i
        else:
            return i
    if arr[n-1]==target:
        print(n-1)
    else:
        print("not found")
fibo_searcg(arr,target)




