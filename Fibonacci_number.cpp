#include <iostream>

int Fibonacci(int x, int a = 0, int b = 1){
    if(x == 0){
        return a;
    }
    else if(x == 1){
        return b;
    }
    return Fibonacci(x - 1, b, a + b);
}

int main(){

    int num;
    std::cout << "Choose nth Fibonacci Number: \n";
    std::cin >> num;

    std::cout << "The number is: " << Fibonacci(num);
    return 0;
}