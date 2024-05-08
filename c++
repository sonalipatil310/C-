#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    string grade;

public:
    Student(string n, int a, string g) {
        name = n;
        age = a;
        grade = g;
    }
    Student() {
        name = "";
        age = 0;
        grade = "";
    }
    void setInfo(string n, int a, string g) {
        name = n;
        age = a;
        grade = g;
    }
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main() 
{
    Student student1;
    student1.setInfo("John Doe", 18, "A");
    student1.displayInfo();
  return 0;
}
