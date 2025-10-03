#include <iostream>
using namespace std;
#define x 3;

#include <iostream>
#include <cstring>
using namespace std;

// class Human2 {
// public:
//     int height;
//     int weight;
//     char blood[];  // flexible array member
// };

// int main() {
//     const char* b = "AB";
//     size_t len = strlen(b) + 1;

//     // 分配整個物件大小 = sizeof(Human2) + blood 長度
//     Human2* hh = (Human2*) malloc(sizeof(Human2) + len);
//     hh->height = 180;
//     hh->weight = 70;
//     memcpy(hh->blood, b, len);

//     cout << hh->height << " " << hh->weight << " " << hh->blood << endl;

//     free(hh);
// }


class Human{
    public:
        int height;
        int weight;
    };

class Human2 : public Human{
    public:
        char blood[3];
    };


int outer_func(int a, int b){
    if(a+b > 10){
        cout<<a+b<<endl;
    }
    else{
        cout<<a-b<<endl;
    }
    return 100;

};


int bootstrap(int (*fp)(int,int)){
    return fp(10,10);
};

int main(){
    // int (*fp)(int,int) = outer_func;
    int res;
    // res = bootstrap(fp);
    res = bootstrap(outer_func);
    cout<<res<<endl;

    Human HH={.height=180,.weight=70};
    switch (HH.height)
    {
    case 180:
        cout << "One" << endl;
        break;
    
    default:
        break;
    }

    Human2 HH2={.height=180,.weight=70,.blood="AB"};
    // void* p = outer_func;
    Human h = HH2;
    cout << h.weight  << endl;
}

