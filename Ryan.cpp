
#include <iostream>

namespace Ryan{
    int a = 10;
    int b = 20;

}

int main(){

    std::cout << Ryan::b<< std::endl;
    return 0;
}

class RyanClass{
    int a;
    int sum(int a, int b){
        return a + b;

    }

}