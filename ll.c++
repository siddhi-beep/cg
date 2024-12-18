#include<iostream>
using namespace std;
struct list
{
    int roll;
    struct list *next;
}*l1,*start, *start1,*l2;
int main()
{
    start=NULL;
    start1=NULL;
    int v,b,i;
    cout<<"Enter number of students liking vanilla icecream:"<<endl;
    cin>>v;
    for(i=0;i<v;i++)
    {
        l1=new list;
        cout<<"Enter rollno :"<<endl;
        cin>>l1->roll;
        l1->next=NULL;
        if(start==NULL)
        {
            start=l1;
        }
        else{
                l2=start;
                
        }

    }
}
