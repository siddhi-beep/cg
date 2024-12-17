#include<iostream>
#include<fstream>
using namespace std;
class Student{
    string name;
    int roll;
    float marks;
    public:
    void accept(){
        cout<<"Enter information of student:"<<endl;
        cout<<"enter name: \n :\n ";
        cin>>name;
        cout<<"Enter roll number:";
        cin>>roll;
        cout<<"enter marks:";
        cin>>marks;
    } 
    void display(){
        cout<<name;
        cout<<roll;
        cout<<marks;
    }
};

int main(){
    Student s[5];
    fstream file;
    int n,i,choice;
    cout<<"enter choice";
    cout<<"\n 1. Write to file\n 2.Read file \n 3. exist"<<endl;
    cin>>choice;

    switch(choice){
        case 1:
        file.open("example.txt",ios::out);
        cout<<"enter total number of students:";
        cin>>n;
        for(i=0;i<=n;i++){
            s[i].accept();
            file.write((char*)& s[i],sizeof(s[i]));
        }
        file.close();
        break;

        case 2:
        file.open("example.txt",ios::in);
        for(i=0;i<=n;i++){
            s[i].display();
            file.read((char*)& s[i],sizeof(s[i]));
        }
        file.close();
        
        case 3:
        exit(0);
        default:
        cout<<"tnvalid choice";
    }
    return 0;



}