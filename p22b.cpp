#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;  
    Person(std::string n, int a) : name(n), age(a) {}
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    void modifyAgeByReference(int& newAge) {
        age = newAge;
    }
    void modifyAgeByPointer(int* newAge) {
        if (newAge != nullptr) {
            age = *newAge;
        }
    }
};

int main() {
    cout<<"AARTI SAHOO 16017702022 \n";
    Person person("John Doe", 25);
    cout << "Initial Information:" << endl;
    person.display();
    cout << endl;
    int newAgeByReference = 30;
    person.modifyAgeByReference(newAgeByReference); 
    cout << "Modified Information (By Reference):" << endl;
    person.display();
    cout << endl;

    int newAgeByPointer = 35;
    person.modifyAgeByPointer(&newAgeByPointer);

    cout << "Modified Information (By Pointer):" << endl;
    person.display();
    return 0;
}