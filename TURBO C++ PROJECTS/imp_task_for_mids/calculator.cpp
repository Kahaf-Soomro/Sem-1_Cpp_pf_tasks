#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;

    cout<<endl<<"enter two numbers:"<<endl
        <<"Num1:"; cin>>a;
    cout<<endl<<"Num2:"; cin>>b;
    cout<<endl<<"Enter the Operator(+,-,*,/,%): "<<endl;
    cin>>op;
        switch (op)
        {
            //Add
        case '+':
           cout<<a<<op<<b<<"="<<a+b<<endl;
            break;
            //Subtract
             case '-':
           cout<<a<<op<<b<<"="<<a-b<<endl;
            break;
            //Multiply
             case '*':
           cout<<a<<op<<b<<"="<<a*b<<endl;
            break;
            //Division
            case '/':
            cout<<a<<op<<b<<"="<<a/b<<endl;
             break;
         case '%':
            cout<<"Remainder of "<<a<<"/"<<b<<"="<<a % b <<endl;
             break;

        default:
        cout<<"Error occured, plz execute again"<<endl;
            break;
        }
 
    return 0;
}