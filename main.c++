#include <iostream>
using namespace std;

int &fun(){

    int x = 10;
    return x;
}

int main(void){


    fun() = 30;
    cout << fun();

    printf("address of function funct() is : %p\n", main);
    return 0;
}


