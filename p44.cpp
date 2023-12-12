
// exam.cpp: Models Examination database using Inheritance 
#include <iostream>
using namespace std;
const int MAX_LEN = 25;
class person{
private:
char name[MAX_LEN];
char sex;
int age;
public:
void ReadData()
{
cout << "Name ?";
cin >> name;
cout << "Sex ?";
cin >> sex;
cout << "Age>?";
cin >> age;}
void DisplayData()
{
cout << "Name:"<< name << endl;
cout << "Sex : " << sex << endl;
cout << "Age :"<< age << endl;}
};
class student:public person // publicly derived intermediate-base class
{
private:
int RollNo;
// student roll number in a class
char branch [20]; // branch or subject student is studying 
public: void ReadData(){
person:: ReadData(); // uses ReadData of person class 
cout<<"Roll Number?";
cin>> RollNo;
cout << "Branch Studying?";
cin>> branch;}
void DisplayData(){
person::DisplayData(); // uses DisplayData of person class 
cout<<"Roll Number: " << RollNo << endl;
cout << "Branch: " << branch << endl;}
};
class exam: public student
{
protected:
int Sub1Marks;
int Sub2Marks;
public:
void ReadData(){
student:: ReadData();
cout << "Marks Scored in Subject 1 < Max: 100> ?"; 
cin >> Sub1Marks;
cout<<"Marks Scored in Subject 2 < Max: 100> ?";
cin>> Sub2Marks;}
void DisplayData()
{student::DisplayData(); // uses DisplayData of student class 
cout<<"Marks Scored ir. Subject 1: "<< Sub1Marks << endl; 
cout<<"Marks Scored in Subject 2: "<< Sub2Marks << endl;
cout<<"Total Marks Scored: "<< TotalMarks();}
int TotalMarks(){
return Sub1Marks + Sub2Marks;
}
};
int main(){
exam annual;
cout<<"Enter data for Student ..." << endl; 
annual. ReadData(); // uses exam::ReadData 
cout<<"Student details... "<< endl;
annual. DisplayData(); // exam::DisplayData
}