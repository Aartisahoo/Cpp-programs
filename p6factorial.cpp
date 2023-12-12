#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++)
        fact*=i;
    return fact;
}
int main(){
    cout<<"AARTI SAHOO 160172022 \n";
    //read a integer
    int num,fact;
    cout<<"enter number for factorial:";
    cin>>num;
   fact=factorial(num);
   cout<<"factorial of "<<num<<"="<<fact<<endl;
    return 0;
}