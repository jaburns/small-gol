#include <stdio.h>
#define M printf
#define F(n)for(n=1;n<33;n++)
typedef unsigned int U;
main(){

    U Q[34],W[34];
    U*E=&Q,*R=&W,i,x,y;
    *E=*R=E[33]=R[33]=0;

    for(i=1;i<33;i++)
        E[i]=(rand()+(rand()<<16));

    B:
    F(y)
    {
        R[y]=0;

        F(i)
        {
            U x=1<<(i-1);
            U S=E[y]&x;

            #define l(a) !!(a<<1&x)+!!(a&x)+!!(a>>1&x)
            U A=l(E[y-1])+l(E[y])+l(E[y+1]);

            if(A==3||S&&A==4){
                R[y]|=x;M("()");
            }else{
                M("  ");
            }
        }
        M("\n");
    }

    F(y)M("--");M("\n");

    fflush(stdout);
    U*a=E;E=R;R=a;
    system("sleep 0.1");

    goto B;
}
