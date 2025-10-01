#include <iostream>
using namespace std;
int main(){
   int a = 5, b = 10;
    cout<<"before: a= "<<a<<" b= "<<b<<endl;
    int temp = b;
    b = a;
    a = temp;
    cout<<"after swapping: a= "<<a<<" b= "<<b;
   

}