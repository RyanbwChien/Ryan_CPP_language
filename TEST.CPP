#include <iostream>

int arr[] = {5,9,20};
// char *arrs[] = {'X','Y','Z'};
char *arrs[] = {"X","Y","Z"};
int x=2;
int y=4;
int z=8;
int *arr1[] = {&x,&y,&z};
int **pp = arr1;

class GG{
    public:
        int G_x;
        int G_y;
};


class Rtest{
    public:
    int cal(int *p, GG *G){
        return *p + (*G).G_x + (*G).G_y;
    }
};

int main(){
    std::cout<<arr<<std::endl;
    std::cout<<arr[0]<<std::endl;
    std::cout<<*arr1[0]<<std::endl;
    std::cout<<*pp[2]<<std::endl;
    std::cout<<&pp<<std::endl;
    GG ininder = {10,90};
    Rtest RR;
    int xx = 5;
    std::cout<<RR.cal(&xx, &ininder)<<std::endl;
}