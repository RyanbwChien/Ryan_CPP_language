
#include <iostream>
#include <cstdlib>  // for malloc/free

namespace Ryan{
    static int a = 10;
    int b = 20;

};

static void test(){
    std::cout<<Ryan::b<< std::endl;

}



class FatherClass{
    int a;
    public:
    int sum(int a, int b){
        return a + b;

    }
    void *ptr = malloc(5);
};



class SonClass: public FatherClass{
    int a;
    public:
    int sum3(int a, int b){
        return 5*a + 6*b;

    }
    
};


int main(){

    std::cout << Ryan::b<< std::endl;
    SonClass SS;
    int res = SS.sum3(7,8);
    std::cout << res << std::endl;
    return res;
    // return 0;

}

