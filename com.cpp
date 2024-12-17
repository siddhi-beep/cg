#include <iostream>
using namespace std;
class complex{
    
    public:
    int real,img;
    //default constructor
    complex(){};
    friend istream &operator>>(istream &get,complex &t);
    friend ostream &operator<<(ostream &output, complex &t);

    complex operator +(complex c1){
        complex c2;
        c2.real=real+c1.real;
        c2.img=img+c1.img;
        cout<<c2.real<<"+"<<c2.img<<"i"<<endl;
    }
    complex operator *(complex c1){
        complex c3;
        c3.real=(real*c1.real)-(img*c1.img);
        c3.img=(real*c1.img)+(img*c1.real);
        cout<<c3.real<<"+"<<c3.img<<"i"<<endl;

    }
};

istream &operator>>(istream &get,complex &t){
cout<<"complex number:";
get>>t.real>>t.img;
}
ostream &operator<<(ostream &output, complex &t){
   output<<t.real<<"+"<<t.img<<"i";
   cout<<endl;

}
int main(){
    complex a,b,c;

    cin>>a;
    cin>>b;
    cout<<"Complex numbers are:";
    cout<<a;
    cout<<b;
    cout<<"additon is:"<<endl;
    c=a+b;
    //cout<<c;
    cout<<"multiplication is:";
    c=a*b;
    //cout<<c;
    return 0;

}



