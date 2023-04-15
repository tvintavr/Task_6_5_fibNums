#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout<<"Введите номер числа Фибоначчи: ";
    int N;
    std::cin>>N;

    bool rightN=N>0;

    int fibNext=1;
    int fib=1;

    while (N>1){
        --N;
        fibNext+=fib;
        fib=fibNext-fib;
    };

    if (rightN) {
        std::cout<<"Число: "<<fib;
    } else {
        std::cout<<"Неверный номер!";
    }






}
