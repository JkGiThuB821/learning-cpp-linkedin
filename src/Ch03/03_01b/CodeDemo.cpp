// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

//structures are just basically data containers and classes are used when u dont only need to hold data but also act on it 
//also the members of a struct are public by default unlike classes 

struct cow{
    //kinda attributes in a class

    std::string name;
    int age;
    cow_purpose purpose;

};

int main(){

    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::meat;
    std::cout << my_cow.name << " is a type-" << (int) my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
    
    
    std::cout << std::endl << std::endl;
    return (0);
}
