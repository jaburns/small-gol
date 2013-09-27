#include <stdio.h>// Idiomatic C version of CW's GoL :P ///
#define cf(a,x)  (((a<<1)&x)!=0)+((a&x)!=0)+(((a>>1)&x)!=0)
#define Z(a,b,c,x) cf(a,x)+cf(b,x)+cf(c,x)/////////////////
#define M printf// This is surely too long of a program ///
typedef unsigned int U;main(){U Q[22],W[22];U*E,*R,i,x,y;E=
&Q;R=&W;E[0]=R[0]=E[21]=R[21]=0;for(i=1;i<21;i++)E[i]=(rand
()+(rand()<<16));while(1){for(y=1;y<21;y++){R[y]=0;for(x=1
<<31;x>0;x>>=1){U S=E[y]&x;U A=Z(E[y-1],E[y],E[y+1],x);if(A
==3||(S)&&(A==4)){R[y]|=x;M("<>");}else{M("  ");}}M("\n");}
for(y=0;y<99;y++)M("-");M("\n");fflush(stdout);U*a=E;E=R;R=
a;system("sleep 0.1");}}// Jeremy "some random guy" Burns |
