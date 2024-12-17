#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
class triangle
{
        int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c;
        public:
        void read();
        void draw();
        triangle operator+(triangle t);
        triangle operator*(triangle t);
        triangle operator/(triangle t);   
};
void triangle::read()
{
        cout<<"\t Program for basic transformation\n";
        cout<<"\n\t Enter the co ordinates of triangle \n";
        setcolor(11);
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
}

void triangle::draw()
{
        int gm,c;
                int gd=DETECT;
                initgraph(&gd,&gm,NULL);
        line(x1,y1,x2,y2);
        delay(1000);
        line(x2,y2,x3,y3);
        delay(1000);
        line(x3,y3,x1,y1);
        delay(5000);
 }
 
 
triangle triangle::operator+(triangle t)
{
        int tx,ty;
        cout<<"Enter translation factors(tx and ty)\n";
        cin>>tx>>ty;
        t.x1=x1+tx;
        t.y1=y1+ty;
        t.x2=x2+tx;
        t.y2=y2+ty;
        t.x3=x3+tx;
        t.y3=y3+ty;
        return(t);
        
}
triangle triangle::operator*(triangle t)
{
        float sx,sy;
        cout<<"Enter the scalling factor(sx and sy)\n";
        cin>>sx,sy;
        t.x1=x1*sx;
        t.y1=y1*sy;
        t.x2=x2*sx;
        t.y2=y2*sy;
        t.x3=x3*sx;
        t.y3=y3*sy;
        return(t);
        
  }
  
  
  triangle triangle::operator/(triangle t)
  {
  
        int r;
        float theta;
        cout<<"\n Enter the angle of rotation \n";
        cin>>r;
        theta=3.14*r/180;
        t.x1=abs(x1*cos(theta) -y1*sin(theta));
        t.y1=abs(x1*sin(theta)+y1*cos(theta));
        t.x2=abs(x2*cos(theta) -y2*sin(theta));
        t.y2=abs(x2*sin(theta)+y2*cos(theta));
        t.x3=abs(x3*cos(theta) -y3*sin(theta));
        t.y3=abs(x3*sin(theta)+y3*cos(theta));
        return(t);
    }
    
    int main()
{
        int c;
        triangle t1,T,S,R,t2;
        cout<<"\n 1.Translation\n 2.Rotation\n 3.Scalling\n 4.exit\n";
        cout<<"Enter your choice:\n";
        cin>>c;
        switch(c)
        {
                case 1:t1.read();
                        t1.draw();
                        T   =t1+t2;
                        T.draw();
                        break;
                        
                case 2:t1.read();
                        t1.draw();
                        R=t1/t1;
                        R.draw();
                        break;
                case 3:t1.read();
                        t1.draw();
                        S=t1*t1;
                        S.draw();
                        break;
                 case 4:
                        exit(0);
                 closegraph();
                 return 0;
        }
}
