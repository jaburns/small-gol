#include <stdio.h>
typedef unsigned int U;
#define cf(a,x) (((a<<1)&x)!=0)+((a&x)!=0)+(((a>>1)&x)!=0)
#define count(a,b,c,x) cf(a,x)+cf(b,x)+cf(c,x)
main() {
	U cellsA[22],cellsB[22];
	U *cells,*cells2,i,x,y;
	cells=&cellsA;cells2=&cellsB;
	cells[0]=cells2[0]=cells[21]=cells2[21]=0;
	for(i=1;i<21;i++)cells[i]=(rand()+(rand()<<16));
    while(1) {
        for(y=1;y<21;y++) {
            cells2[y]=0;
            for(x=1<<31;x>0;x>>=1){
                U live = cells[y] & x;
                U sum = count(cells[y-1],cells[y],cells[y+1],x);
                if(sum==3||(live)&&(sum==4)){
                    cells2[y] |= x;
                    printf("<>");
                } else {
                    printf("  "); } }
            printf("\n"); }
        printf("------------------------------------------------------------------------\n");
        fflush(stdout);
        U *a = cells; cells = cells2; cells2 = a; system("sleep 0.1"); } }

