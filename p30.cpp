#include <iostream>
using namespace std;
class details{
    public:
    char name[30];
    char address[50];
    void get(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the address: ";
        cin>>address;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
    }
};
class student:public details{
    public:
    float percentage;
    float marks;
    void get(){
        details::get();
        cout<<"Enter the percentage: ";
        cin>>percentage;
        cout<<"Enter the marks: ";
        cin>>marks;
    }

};
class teacher : public details {
public:
    float salary;
    void get() {
        details::get();
        cout << "Enter the salary: ";
        cin >> salary;
    }
    void show() {
        details::show();
        cout << "Salary: " << salary << endl;
    }
};
int main(){
cout<<"AARTI SAHOO 16017702022\n"<<endl;
    student s1;
    s1.get();
    s1.show();
    teacher t1;
    t1.get();
    t1.show();

    return 0;
}