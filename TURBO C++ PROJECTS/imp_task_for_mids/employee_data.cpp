#include <iostream>
using namespace std;

struct employee{
string emp_name;
int emp_salary;
};
int main(){
    employee emp1;
    employee emp2;
    employee emp3;
  
cout<<"fill in the info of three employees:"<<endl;
//emp1
cout<<"name: "; cin>>emp1.emp_name;
cout<<"salary: "; cin>>emp1.emp_salary;
cout<<"name: "; cin>>emp2.emp_name;
cout<<"salary: "; cin>>emp2.emp_salary;
cout<<"name: "; cin>>emp3.emp_name;
cout<<"salary: "; cin>>emp3.emp_salary;
cout<<"Name\tSalary"<<endl
    <<emp1.emp_name<<"\t"<<emp1.emp_salary<<endl
    <<emp2.emp_name<<"\t"<<emp2.emp_salary<<endl
    <<emp3.emp_name<<"\t"<<emp3.emp_salary;

    

    return 0;
}