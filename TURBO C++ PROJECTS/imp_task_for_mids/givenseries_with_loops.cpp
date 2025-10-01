#include<iostream>
using namespace std;

//  series to build :
//  60  55  50  45  210
//  40  35  30  25  130
//  20  15  10  5   50  

int main()
{
    int n = 60;
    for(int line =1 ; line<=3; line++){
//for print first three coloumns
        for(int i =1; i<=4; i++){
            cout<<n<<"\t";
            n-=5;
        }
        //for print the last coloum{special numbers}
        if (line ==1) cout<<210;
      else  if (line ==2) cout<<130;
       else if (line ==3) cout<<50;
        
        
        cout<<endl;
    }



    return 0;
}