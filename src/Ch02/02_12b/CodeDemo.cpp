// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

//anything defined absolitely outside any function doesnt have a scope 
//or has a global scope -- not a good thing 
#include <iostream>
#include <cstdint>

//c style enums defined outside functions --- have no scope 
//so their values will be overidden in the local scope of the functions
enum cow_purpose {dairy, meat, hide, pet};

//for c++ we use enum classes which are strongly typed  
enum class grocery {bakery, deli, meat};

int main(){
    grocery a;

    a = grocery:: meat;

    std::cout << "a = " << (int)a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
