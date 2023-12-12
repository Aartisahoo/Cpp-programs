#include <iostream>
using namespace std;

int main(){
    cout<<"AARTI SAHOO 160172022 \n";
    //read a integer
    int num;
    cout<<"enter starting pattern:";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<j;}
            cout<<endl;
    }
    return 0;
}
