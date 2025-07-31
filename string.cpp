#include<iostream>

char *p = "測試";

int num1 = 3;
int *num1_point = &num1;


int main(){
    p="ABC";
    *num1_point = 100;
    for(int i=0; i<=2;i++){
        std::cout<<*(p+i);
    }
    std::cout<<std::endl;
    std::cout<<num1_point<<std::endl;
    std::cout<<&num1_point<<std::endl;
    std::cout<<*num1_point<<std::endl;
    std::cout<<sizeof(*num1_point)<<std::endl;
    // std::cout<<*num1_point[0]<<std::endl;
}
