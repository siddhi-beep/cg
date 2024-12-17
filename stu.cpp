#include<iostream>
#include<string.h>
using namespace std;
class Student{
    int roll;
    char dob[10];
    char name[20];
    char address[50];

    public:
    //constructor
    Student(){
        roll=0;
        strcpy(name,"");
        strcpy(address,"");
        strcpy(dob,"");
    }
    //parameterized constructor
    Student(int roll, const char* name, const char*address, const char* dob){
        this->roll=roll;
        strcpy(this->name, name);
        strcpy(this->address,address);
        strcpy(this->dob, dob);

    }

    void accept(){;
        cout<<"Enter students roll.no:";
        cin>>roll;
        cout<<"enter students name:";
        cin>>name;
        cout<<"enter address:";
        cin>>address;
        cout<<"enter date of birth:";
        cin>>dob;

    }
    
    void display(){
        cout<<"\n RollNo.:"<<roll;
        cout<<"\n name:"<<name;
        cout<<"\n address:"<<address;
        cout<<"\n date of bith:"<<dob;
    }
};

int main(){
    int ch,n;
    Student stu[20];
    while (true){
        cout<<"Enter choice:"<<endl;
        cout<<"\n 1.Accept student details\n2.display student details\n3.exist";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"enter total no. of students:";
            cin>>n;
            for(int i=0;i<=n;i++){
                cout<<"entering detail for student:"<<(i+1)<<endl;
                stu[i].accept();
            }
            break;

            case 2:
            for(int i=0;i<=n;i++){
                cout<<"displaying details of student:"<<(i+1)<<endl;
                stu[i].display();
            }
            break;
            
            case 3:
                exit(0);
            
            default:
                cout<<"invalid choice";
        }
    }
    return 0;
}