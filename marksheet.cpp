#include<iostream>
using namespace std;
int main(){
cout<<"Enter Marks to print out the percentage and grade: \n "<<endl;
	cout<<"Enter Marks of English: "<<endl;
	int eng;
	cin>>eng;
	cout<<"Enter Marks of Mathematics: "<<endl;
	int math;
	cin>>math;
	cout<<"Enter Marks of Chemistry: "<<endl;
	int chem;
	cin>>chem;
	cout<<"Enter Marks of Physics: "<<endl;
	int phy;
	cin>>phy;
	cout<<"Enter Marks of Pak Studies: "<<endl;
	int pak;
	cin>>pak;
	cout<<"Enter Marks of Urdu: "; cout<<endl;
	int urdu;
	cin>>urdu;
	 double percentage = ((eng + math + chem + phy + pak + urdu) / 1100)*100;
	cout<<"Your Percentage is: "<<percentage<<endl;

	if (percentage >= 90) {
		cout << "Your Grade is: A+" << endl;
	}
	else if (percentage >= 80) {
		cout << "Your Grade is: A" << endl;
	}
	else if (percentage >= 70) {
		cout << "Your Grade is: B" << endl;
	}
	else if (percentage >= 60) {
		cout << "Your Grade is: C" << endl;
	}
	else if (percentage >= 50) {
		cout << "Your Grade is: D" << endl;
	}
	else {
		cout << "You are fail" << endl;
	}


		return 0;
}