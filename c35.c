#include <stdio.h>

int Get(){
    double a= 2.553;
    return a;
}

int mystery(int p, int q){
     
    int r;
    if ((r = p % q) == 0)
        return q; 
    else return mystery(q, r);
}

int main(void)
{
    double x = 5.5;
    double y = 6.5;
    double *p1 = &x;
    double *p2 = &y;
    return 0;
}