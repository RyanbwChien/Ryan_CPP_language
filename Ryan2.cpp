
#include <iostream>

namespace Ryan{
    int a = 10;
    int b = 20;

}
// int a=1, b=2, c=3;
// int *arr[] = {&a,&b,&c};
// int *(*ptr)[3] = &arr;

struct ABC{
    int a;
    char b;
    double c;
};

int arr[]={2,9,7};
// int (*ptr1)[3] = &arr;
int ptr1 = 3;


int test(char a, char b){
    return a + b;
}

// int fun_in_fun(int c, int (*func)(char, char)){


// }


int main(){
    struct ABC BB;
    ABC (*ptr) = &BB;
    ptr->a=1;
    std::cout << *(int*)((char*)(&ptr1))<< std::endl;
    std::cout << ptr->a<< std::endl;
    std::cout << Ryan::b<< std::endl;
    return 0;
}