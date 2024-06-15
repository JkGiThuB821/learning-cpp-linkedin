// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>

//include c std library for ints (coz we ll be using signed and unsigned ints here)
#include <cstdint>

int main(){
    //has less memory than a double (both are technically decimals)
    float flt;
    //signed 32-bit int
    int32_t sgn;
    //unsigned 32-bit int (2^32 - the int number)
    uint32_t unsgn;
    flt = -7.66;
    sgn = flt;
    unsgn = sgn;

    std::cout << " float: " << flt << std::endl;
    std::cout << " int32: " << sgn << std::endl;
    //this is casting 
    std::cout << "uint32: " << (int32_t) unsgn << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
