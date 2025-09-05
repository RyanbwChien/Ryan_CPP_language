#include<iostream>
#include <string>
char name[] = "fdjfkdfj";  // ✅ 編譯器推導出大小為 13（含 \0）

struct Ryan{
        char name[100] = "jidjfijdijf";
        
};

class Ryan_test{
    // std::string name;
    public:
        std::string name;
        int age;
        Ryan_test(std::string n, int a): name(n), age(a){};
        int sumation(int a, int b){
            return a + b;
        }

};
 
int main(){
    Ryan_test RR("Ryan", 43);
    struct Ryan Ry;
    std::cout<< ((char*)(&Ry) + 4) <<std::endl;
    std::cout<<RR.sumation(5,3)<<std::endl;
    std::cout<<RR.name<<std::endl;
    std::cout<<Ry.name<<std::endl;
    std::cout<<name<<std::endl;
    return 0;
};