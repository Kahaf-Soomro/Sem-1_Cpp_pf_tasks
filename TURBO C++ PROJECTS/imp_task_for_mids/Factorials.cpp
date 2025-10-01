#include <iostream>
using namespace std;
int main(){
    int n, fact;
fact = 1;
cout<<"Enter a number for its Factorials:"<<endl;
cin>>n;
cout<<n<<"! = ";
for(int i=n; i>=1; i--){
    fact*=i;
cout<<i<<"*";
}
cout<<" = "<<fact;
    return 0;
}