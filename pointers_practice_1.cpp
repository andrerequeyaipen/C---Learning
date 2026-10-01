#include <iostream>

int main(){
    int number = 42;
    int*pNumber = &number;
    *pNumber = 34;
    std::cout << "Number that the variable holds: " <<*pNumber << '\n';
    std::cout << "Address of the pointer: " << pNumber << '\n';
    return 0;
}