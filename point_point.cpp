#include<cstdio>

int x=3,y=4,z=5;

int* intergl[]={&x,&y,&z};
int** p_intergl = intergl;

int *px = &x;


int xx = 33;
int *p=&xx;
int **pp = &p;

int main(){
    printf("%p\n",(void*)pp);
    printf("%d\n",**p_intergl);
    printf("%d\n",*(*(p_intergl+1)));
}