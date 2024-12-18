arr=[]
n=int(input("Enter totla no. of students:"))
for i in range(n):
    p=float(input("Enter percentage of students:"))
    
    arr.append(p)
print(arr)
def bubble_sort():
    n=len(arr)
    for i in range(n):
        for j in range(0,n-i-1):
            if(arr[j]>arr[j+1]):
                arr[j],arr[j+1]=arr[j+1],arr[j]
    print(arr)
bubble_sort()
topfive=arr[-5:]
for r in reversed(topfive):
    print(r)


