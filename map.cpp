#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    string s;
    string state;
    int population;
    map<string, int>mymap;
    map<string, int>::iterator i;

    int n;
    cout<<"enter number of states:";
    cin>>n;
    cout<<"enter info of state:";
    for(int i=0;i<n;i++){
        cin>>state;
        cin>>population;
        mymap.insert(pair<string , int>(state,population));

    }
    for(i=mymap.begin();i!=mymap.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    return 0;
}