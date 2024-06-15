// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
// //not a good way 
// #define AGE_LENGTH 3
int main(){

    const size_t age_length = 4;
    int arr[age_length];
    arr[0] = 1;
    arr[1] = 2;

    std::cout << arr[0] << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
