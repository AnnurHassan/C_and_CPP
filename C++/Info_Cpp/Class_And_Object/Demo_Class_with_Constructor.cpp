#include <iostream>
#include <string>
using namespace std;

class Student{

    string name;
    int age;

    public:

        Student(string new_name, int new_age){
            name = new_name;
            age = new_age;
        }

        string get_name() {
            return name;
        }

        int get_age(){
            return age;
        }

};

int main() {

    Student s1("Alamgir", 21);

    cout << s1.get_name() << "\n";
    cout << s1.get_age() << "\n";
    
}