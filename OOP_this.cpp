#include <iostream>
using namespace std;

class RR{
    public:
        int e;

        void cal(){
            cout<<e;

    }


};

// int main(){
//     RR r;
//     r.e=100;
//     r.cal();


// }

int main(){
    RR *r = new RR; //之所以要用 new，關鍵在於：你宣告的是「指標變數」(RR* r)，但不是「實體物件」。
    r->e=100;
    r->cal();


}