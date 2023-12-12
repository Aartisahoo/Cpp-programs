#include <iostream>
using namespace std;

int main(){
    cout<<"AARTI SAHOO 160172022 \n";
    //read a integer
    int num;
    cout<<"enter number to be printed in table:";
    cin>>num;
    //print table of num
    for(int i=1;i<=10;i++)
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    return 0;
}