#include <iostream>
using namespace std;
// make a class person and its two children 'students' and 'sports'
class person{
	public:
	void get_name(){
		cout<<"this is a person"<<endl;
	}
	void get_age(){
		cout<<"age is required"<<endl;
	}
};
class student:public person{
	public:
	student(){
		person::get_name();
		person::get_age();
		cout<<"this is a student"<<endl;
	}
};
// make child of student as 'exams'
class exams:public student{
	public:
	exams(){
		cout<<"this is a exam"<<endl;
	}
};
class sports:public person{
	public:
	sports(){
		person::get_name();
		person::get_age();
		cout<<"this is a sports"<<endl;
	}
};
// make cgild of sports and exam as 'results'
class results:public exams,public sports{
	public:
	results(){
		cout<<"this is a result"<<endl;
	}
};

int main(){
cout<<"AARTI SAHOO 16017702022"<<endl;
	
	return 0;
}