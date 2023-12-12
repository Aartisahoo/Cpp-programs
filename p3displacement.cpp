#include <iostream>
using namespace std;

float displacement(float a,float u,float t)
{   //calculating displacement
    float disp;  //initializing variables 
    disp=u*t+0.5*a*t*t;
    return disp;
}
int main()
{   //calculating displacement
    float a,u,t,disp;  //initializing variables 
    cout<<"AARTI SAHOO 160172022 \n";
    cout<<"Enter the value of initial velocity(u), acceleration(a) and time(t): "<<endl;
    cin>>u>>a>>t;
    disp=displacement(a,u,t);
    cout<<"The displacement is: "<<disp;
    
}
