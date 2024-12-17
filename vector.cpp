#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
struct Record{
    string name;
    string dob;
    string telephone;
};

bool compareRecords(const Record& a, const Record& b){
    return a.name<b.name;
}

int main(){
        vector<Record>Records;
        int n;
        cout<<"Enter the number of Records:";
        cin>>n;
        for(int i=0;i<n;i++){
            Record r;
            cout<<"Enter name:";
            cin>>r.name;
            cout<<"enter date of birth:";
            cin>>r.dob;
            cout<<"enter telephone number:";
            cin>>r.telephone;
            Records.push_back(r);

        }

        sort(Records.begin(),Records.end(),compareRecords);
        cout<<"sorted records are:";

        for(const Record& r:Records){
            cout<<"name:"<<r.name<<"date of birth"<<r.dob<<"telephone number"<<r.telephone<<endl;
    
        }

        string searchname;
        cout<<"enter name to search:";
        cin>>searchname;
        auto it=find_if(Records.begin(),Records.end(),[&searchname](const Record& r ){
            return r.name==searchname;
        });
        if(it !=Records.end()){
            cout<<"record found:"<<it->name<<endl;
        }
        else{
            cout<<"record not found"<<endl;
        }
        return 0;

    }

