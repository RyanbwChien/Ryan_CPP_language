#include<iostream>

// double x;
// double *p;
// char* cc;

// 在全域初始化
// double x = 3.1415926;
// double* p = &x;

int x, y, z;
int *p[] = {&x, &y, &z};
int **pp = p;

// const char temp[] = {'a', 'b', 'c', '\0'};
// char* cc = (char*)temp;  // 很像這樣

int main(){
    // x = 3.1415926;
    // p = &x;
    // cc = "djkfkdf";
    x = 1;
    y = 2;
    z = 3;
    *pp[1] = 5;
    std::cout<<x<<std::endl;
    // std::cout<<cc<<std::endl; //因為 std::cout 在輸出 char* 時會當作是 C-style 字串 處理，從記憶體中的 cc 開始，直到遇到 \0 為止。
    return 0;
}