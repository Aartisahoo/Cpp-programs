//int_ext.cpp: Student result based on internal and external marks Multipath Inheritance with virtual classes
#include <iostream>
using namespace std;
class student{
protected:
	int RollNo;
	char branch[20];
public:
	void ReadStudentData (){
		cout << "Roll Number?";
		cin >> RollNo;
		cout << "Branch Studying?";
		cin >> branch;
	}
	void DisplayStudentData(){
		cout << "Roll Number: " << RollNo << endl;
		cout << "Branch: " << branch << endl;
	}
};

class InternalExam: virtual public student{
protected:
	int Sub1Marks;
	int Sub2Marks;
public:
	void ReadData(){
		cout << "Marks Scored in Subject 1 < Max: 100> ?";
		cin >> Sub1Marks;
		cout << "Marks Scored in Subject 2 < Max: 100>?";
		cin >> Sub2Marks;
	}
	void DisplayData(){
		cout << "Internal Marks Scored in Subject 1: " << Sub1Marks << endl;
		cout << "Internal Marks Scored in Subject 2: " << Sub2Marks << endl;
		cout << "Internal Total Marks Scored: " << InternalTotalMarks() << endl;
	}
	int InternalTotalMarks(){
		return Sub1Marks + Sub2Marks;
	}
};

class ExternalExam: virtual public student{
protected:
	int Sub1Marks;
	int Sub2Marks;
public:
	void ReadData(){
		cout << "Marks Scored in Subject 1 < Max: 100> ? ";
		cin >> Sub1Marks;
		cout << "Marks Scored in Subject 2 < Max: 100> ? ";
		cin >> Sub2Marks;
	}
	void DisplayData(){
		cout << "External Marks Scored in Subject 1: " << Sub1Marks << endl;
		cout << "External Marks Scored in Subject 2: " << Sub2Marks << endl;
		cout << "External Total Marks Scored: " << ExternalTotalMarks() << endl;
	}
	int ExternalTotalMarks(){
		return Sub1Marks + Sub2Marks;
	}
};

class result: public InternalExam, public ExternalExam{
public:
	int TotalMarks(){
		return InternalTotalMarks() + ExternalTotalMarks();
	}
};

int main(){
	result student1;
	cout << "Enter data for Student1 ... " << endl;
	student1.ReadStudentData();
	cout << "Enter Internal Marks " << endl;
	student1.InternalExam::ReadData();
	cout << "Enter External Marks " << endl;
	student1.ExternalExam::ReadData();
	cout << "Student details.." << endl;
	student1.DisplayStudentData();
	student1.InternalExam::DisplayData();
	student1.ExternalExam::DisplayData();
	cout << "Total Marks: " << student1.TotalMarks() << endl;
	return 0;
}