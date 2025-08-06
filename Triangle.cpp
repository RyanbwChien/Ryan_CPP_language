#include<iostream>
#include<vector>
using namespace std;

void triangle(int height){
    for(int i=1; i<=height; i++){
        for(int j=1; j<=(height-i);j++){
            std::cout<<' ';
        }
        
        for(int j=1; j<=2*i-1;j++){
            std::cout<<'*';
        }

        std::cout<<'\n';
    }
}


int main(){
    vector<int> v;

    triangle(5);

    }
