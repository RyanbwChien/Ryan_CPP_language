#include<iostream>
using namespace std;

int fib(int n){
    // int result;
    if(n > 2){
        return n + fib(n-1);
    }
    else{
        return 1;

    }

}
char** argv;
char x = 'A', y = 'B', z = 'C';

char *p = "ABC";
// int *p = 3;

// argv[] = {&x,&y,&z};

int main(int arg, char** argv){
    int n = 10;
    std::cout<<fib(n);
    return 0;
}