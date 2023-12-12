#include <iostream>//check this q
using namespace std;
#include <math.h>

// check whether a number is Armstrong or not
class Armstrong{
    public:
        int num, temp, rem, sum=0, count=0;
        void getdata(){
            cout << "Enter the number: ";
            cin >> num;
            temp = num;
        }
        void check(){
            while(temp!=0){
                temp = temp/10;
                count++;
            }
            temp = num;
            while(temp!=0){
                rem = temp%10;
                sum = sum + pow(rem, count);
                temp = temp/10;
            }
            if(sum == num){
                cout << "The number is Armstrong" << endl;
            }
            else{
                cout << "The number is not Armstrong" << endl;
            }
        }
};
int main(){
    cout<<"AARTI SAHOO 160172022 \n";
    Armstrong a1;
    a1.getdata();
    a1.check();
    return 0;}