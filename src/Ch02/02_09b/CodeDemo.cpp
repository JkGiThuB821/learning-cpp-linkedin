// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
//anything that starts with c (like below) is part of the c std library 
//--which we are importing in c++ file
#include <cstring>
#include <string>


int main(){

    //c doesnt have strings !! 
    // we need to use character arrays to do string things with c unlike c++ 

    //first char arrays for c 
    const size_t LENGTH = 25;
    char arr1[LENGTH] = "Hello guys!";
    char arr2[] = "how's it?";

    //kinda concatenating strings but it actually modifies the first string 
    strncat(arr1,arr2,LENGTH);
    std::cout << arr1 << std::endl;

    std::string str1 = "heyyy";
    std::string str2 = "how r yaaa?!";
    std:: cout << str1 + str2 << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
