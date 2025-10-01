#include <iostream>
using namespace std;

    struct points{
        int x;
        int y;
        int sum;
    };


int main(){
    points p;
    cout<<"(0,0)";
    cout<<endl<<"Enter the value of X axis:";
    cin>>p.x;
     cout<<endl<<"("<<p.x<<",0)";
cout<<endl<<"Enter the value of Y axis:";
    cin>>p.y;
     cout<<endl<<"("<<p.x<<","<<p.y<<")"<<endl;
     p.sum = p.x + p.y;

     cout<<p.x<<"+"<<p.y<<"="<<p.sum;

    


    

    return 0;
}