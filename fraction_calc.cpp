#include<iostream>
using namespace std;

int main(){
    
	  double x,y,a,b,c,d;
	 string op;

	 cout<<"\n enter first fraction's nominator\t";
	 cin>>a;

	 cout<<"\n enter first fraction's denominator\t";
	 cin>>b;

	 cout<<"\n Enter mathematical operator : ";
	 cin>>op;
	 cout<<"\n enter 2nd fraction's nominator\t";
	 cin>>c;

	 cout<<"\n enter 2nd fraction's denominator\t";
	 cin>>d;

	 if(b==0 || d==0)
	 {
		 cout<<"Invalid input, denominator can not be zero";
	 }
	 else if(op == "+"){
		 x=(a*d+b*c);
		 y=(b*d);
	 }
	 else if(op == "-"){
		 x=(a*d-b*c);
		 y=(b*d);
	 }
	 else if(op == "*"){
		 x=a*c;
		 y=b*d;
	 }
	 else if(op == "/"){
		 x=a*d;
		 y=b*c;
	 }

	  cout<<"\n"<<a<<"/"<<b<<" "<<op<<" "<<c<<"/"<<d<<"  =  "<<x<<"/"<<y<<" = "<<x/y;
	 

    return 0;
}