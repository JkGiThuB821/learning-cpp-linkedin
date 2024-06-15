// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
#include <iostream> 
#include <string>
#include <typeinfo>

int main(){

    auto d = 8;
    auto c = 1.2f;
    auto b = 1938247298472984;
    std::cout << "Type d: " << typeid(d).name() << std::endl;
    std::cout << "Type c: " << typeid(c).name() << std::endl;
    std::cout << "Type b: " << typeid(b).name() << std::endl;

    // std::string username;
    // //flush is used instead of endl to ensure print message is completely sent 
    // //before asking for user input
    
    // std::cout << "Input your name: " << std::flush;
    // std::cin >> username;
    // std::cout << "Your name is: " << username << std::endl;

    std::cout << std::endl << std::endl;
    return(0);
}
