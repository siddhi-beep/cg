#include<iostream>
using namespace std;
template<typename t>
void selection_sort(t arr[],int n){
    for (int i=0;i<=n;i++){
        int minindex=i;
        for(int j=0;i<=n;j++){
            if(arr[j]<arr[minindex]){
                j=minindex;
            }
        swap(arr[minindex],arr[i]);
        }
    }
}
template<typename t>
void display(t arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int A[30];
    int n;
    cout<<"enter total number of elements in array:";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<"enter elements in array:";
        cin>>A[i];
        
    }

    display(A,n);
    selection_sort(A,n);
    cout<<"sorted array is:";
    
    display(A,n);

    float B[30];
    int m;
    cout<<"enter total number of elements in array:";
    cin>>n;
    for(int i=0;i<=m;i++){
        cout<<"enter elements in array:";
        cin>>B[i];
    }
    display(B,m);
    selection_sort(B,m);
    cout<<"sorted array is:";
    display(B,m);
    return 0;

}


