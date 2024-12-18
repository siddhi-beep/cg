arr=[]
n=int(input("Enter totla no. of students:"))
for i in range(n):
    p=float(input("Enter percentage of students:"))
arr.append(p)
print(arr)
first=0
last=len(arr)-1    

def partition(arr,first,last):
    pivot=arr[last]
    i=first-1
    for j in range(first,last):
        if arr[j]<=pivot:
            i+=1
            arr[j],arr[i]=arr[i],arr[j]
    arr[i+1],arr[first]=arr[first],arr[i+1]
    return i+1


def quick_sort(arr,first,last):
    if first<last:
        pi=partition(arr,first,last)
        quick_sort(arr,first,pi-1)
        quick_sort(arr,pi+1,last)
quick_sort(arr,first,last)
