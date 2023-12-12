#include <iostream>
using namespace std;
#include <math.h>
int main(){
    int num,rem,dec=0,i=0;
    cout<<"AARTI SAHOO 160172022 \n";
    cout<<"Enter a binary number: ";
    cin>>num;
    while(num!=0){
        rem=num%10;
        dec+=rem*pow(2,i);
        num=num/10;
        i++;
    }
    cout<<"The decimal number is: "<<dec;
}

