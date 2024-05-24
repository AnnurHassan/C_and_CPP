#include <string>

class Student{

    std::string name;
    int age;

    public:

        Student(std::string new_name, int new_age);

        std::string get_name();

        int get_age();
};