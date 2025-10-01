#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number for its multiplicative table till 10"<<endl;
    cin>>num;
    if(num == 0) cout<<"Enter a non zero num";
    else{

        for(int i = 1; i <=10; i++){
            cout<<num<<" x "<<i<<" = "<<num*i<<endl;
            
        }
    }
}