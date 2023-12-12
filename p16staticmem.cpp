#include <iostream>
using namespace std;
class counter { 
    int n;
    static int Count;
public:
    void getdata (int number)
{ n = number; Count ++;
} 
void showcount () { cout<<"Count: " <<Count << endl; } };
int counter :: Count;
int main(){ 
    cout<<"AARTI SAHOO 160172022 \n";
    counter C1, C2, C3, C4;
C1. showcount();
C2. showcount();
C3. showcount ();
C4. showcount();
C1. getdata (10);
C2. getdata (20);
C3. getdata (30);
C4. getdata (40);
cout<<"Value of Count after calling "; cout<<"getdata function: " <<endl;
C1. showcount();
C2. showcount();
C3. showcount();
C4. showcount ();
}