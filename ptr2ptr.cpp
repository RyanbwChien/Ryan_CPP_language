#include <iostream>

int x = 100;
int y= 10;
int z = 1;
int *ptr[] = {&x, &y, &z};
int **pptr = ptr;
char c[] = "A";

int arr[] = {7,8,9};

int main(){
    std::cout<<*pptr[2]<<std::endl;
    std::cout<<arr[2]<<std::endl;
    std::cout<<c<<std::endl;
}