#include <iostream>
using namespace std;

int main(){
    cout<<"AARTI SAHOO 160172022 \n";
    //read a integer
    int num1,num2;
    cout<<"enter two numbers to be swapped:" <<endl;
    cin>>num1>>num2;
    cout<<"before swapping: "<<num1<<" "<<num2<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"after swapping: "<<num1<<" "<<num2<<endl;
    return 0;
}
