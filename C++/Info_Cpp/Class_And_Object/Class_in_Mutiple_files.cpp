#include <iostream>
#include <string>
#include "Class_in_Mutiple_files.hpp"
using namespace std;


int main() {

    Student s1("Alamgir", 21);

    cout << s1.get_name() << "\n";
    cout << s1.get_age() << "\n";
    
}