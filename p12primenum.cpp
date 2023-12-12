#include <iostream>
using namespace std;
// program to check if a number is prime or not
int main(){
    int num,flag=0;
    cout<<"AARTI SAHOO 160172022 \n";
    cout<<"Enter a number to check prime: ";
    cin>>num;
    for(int i=2;i<num-1;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"The number is prime";
    }
    else
    {
        cout<<"The number is not prime";
    }
    
}