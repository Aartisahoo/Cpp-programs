#include <iostream>
using namespace std;
 int main(){
    cout<<"AARTI SAHOO 160172022 \n";
    //read a floating point number
    float f;int int_part;
    cout<<"enter a floating point number";
    cin>>f;
    int_part=(int)f;
    cout<<"integer part="<<int_part<<endl;
    cout<<"fractional part="<<float(f-int_part)<<endl;
    return 0;
}