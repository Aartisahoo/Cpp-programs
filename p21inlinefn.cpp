#include <iostream>
using namespace std;
class squaring{
    public: int num;
    void square(){
        cout << "Enter the number: ";
        cin >> num;
        cout << "The square of the number is: " << num*num << endl;
    }

};

int main(){
    cout<<"AARTI SAHOO 16017702022 \n";
    squaring s1;
    s1.square();
    return 0;
}