arr=[]
n=int(input("Enter totla no. of students:"))
for i in range(n):
    p=float(input("Enter percentage of students:"))
    
    arr.append(p)
print(arr)

def selection_sort():
    for i in range(len(arr)):
        minindex=i
        for j in range(len(arr)):
            if(arr[j]>arr[minindex]):
                minindex=j
                arr[i],arr[minindex]=arr[minindex],arr[i]
    print("sorted array is:",arr)
selection_sort()
print("Top five students percentage:")
topfive=arr[-5:]
for r in reversed(topfive):
    print(r)




