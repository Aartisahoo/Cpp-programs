#include <iostream>
using namespace std;
int a = 10; // global variable void main()
int main(){
cout<<"AARTI SAHOO 160172022 \n";
cout << a << '\n'; // uses global variable 
int a = 20;
{
int a = 30;
cout << a << "\n"; 
cout << ::a << '\n';
}
cout << a << '\n';  
cout << ::a << '\n';
}