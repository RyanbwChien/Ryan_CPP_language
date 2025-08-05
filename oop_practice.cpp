#include<iostream>
using namespace std;

class Total{

    public:
    static void vtest(){
    std::cout <<1+2<<std::endl;
    }
    char arr[3]={'A','B','C'};

    void test(){
        std::cout <<1+2<<std::endl;
        // return 0;
    }
    // virtual int vtest(){
    //     std::cout <<1+2<<std::endl;
    // }
};


int main(){
    Total tt;
    Total *ptr = &tt;
    ptr->arr;
    int sum2 = 0;
    for(int i=0; i < sizeof(ptr->arr);i++){
        sum2 += ptr->arr[i];
    }
    std::cout <<sum2<<std::endl;
    int sum = 0;
    for(int i=0; i < sizeof(tt.arr);i++){
        sum += tt.arr[i];
    }
    std::cout <<sum<<std::endl;
    Total::vtest();
    tt.test();
    return 0;
}