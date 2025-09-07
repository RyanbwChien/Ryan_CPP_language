#include <iostream>
using namespace std;

class Action{
    public:
    int a;
    int b;

};


class Person{
    public:
        int height;
        int weight;
        std::string name;
        Person(int h, int w, const string& n) : height(h), weight(w), name(n) {}

        int move(Action* p){
            std::cout<< (p->a + p->b)<<std::endl;


    };
};

int main(){
    Action A = {10,20};
    Person P = {180,70,"Ryan"};
    P.move(&A);
}