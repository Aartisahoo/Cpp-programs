//Write a Program to Concatenate two Strings using Operator Overloading
#include <iostream>
#include <string.h>
using namespace std;
class String
{
    char str[100];
public:
    void getdata()
    {
        cout << "Enter a string" << endl;
        cin >> str;
    }
    void display()
    {
        cout << "The string is: " << str << endl;
    }
    String operator+(String& S)
    {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, S.str);
        return temp;
    }
};
int main()
{
    cout << "AARTI SAHOO 16017702022" << endl;
    String S1, S2, S3;
    S1.getdata();
    S2.getdata();
    S3 = S1 + S2;
    S3.display();
    return 0;
}
