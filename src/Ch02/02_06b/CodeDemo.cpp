// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string> 

//include (analogous to import) stuff from std c library like unsigned ints
#include <cstdint> 

//the defined symbols such as capacity are called macros
#define CAPACITY 5000
#define DEBUG

int main(){
    //32 bit int 
    int32_t large = CAPACITY;
    //unsigned int 
    uint8_t small = 37;

#ifdef DEBUG 
    std::cout << "[Addition process]" << std::endl;

    
#endif 
    large += small;
    std::cout << "Ans: " << large << std::endl;




    
    std::cout << std::endl << std::endl;
    return (0);
}
