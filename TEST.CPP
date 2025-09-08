#include <iostream>

int arr[] = {5,9,20};
int x=2;
int y=4;
int z=8;
int *arr1[] = {&x,&y,&z};
int **pp = arr1;

int main(){
    std::cout<<arr<<std::endl;
    std::cout<<arr[0]<<std::endl;
    std::cout<<*arr1[0]<<std::endl;
    std::cout<<*pp[2]<<std::endl;
    std::cout<<&pp<<std::endl;
}