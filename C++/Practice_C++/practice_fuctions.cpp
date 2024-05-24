#include "practice_fuctions.hpp"

// add the Song constructor here:
Student::Student(std::string new_name, int new_age){
    name = new_name;
    age = new_age;
}

std::string Student::get_name() {
    return name;
}

int Student::get_age(){
    return age;
}
