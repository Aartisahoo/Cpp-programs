// write a Program to illustrate the concept of Friend Function and Friend Class
#include <iostream>
using namespace std;

    
void swap(int i,int j) {
int temp;
temp=i;
i=j;
j=temp;
cout<<"Swapped values are: "<<i<<" "<<j<<endl;
}
void swap(double i,double j) {
float temp;
temp=i;
i=j;
j=temp;
cout<<"Swapped values are: "<<i<<" "<<j<<endl;
}
void swap(char i, char j) {
char temp;
temp=i;
i=j;
j=temp;
cout<<"Swapped values are: "<<i<<" "<<j<<endl;
}

int main() {
    cout<<"AARTI SAHOO 16017702022 \n";
swap(10,17);
swap(10.10,8.9);
swap('t','h');
return 0;
}
