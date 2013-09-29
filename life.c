#define F(n)for(n=1;n<33;n++)
#define l(a)-!(a<<1&x)-!(a&x)-!(a>>1&x)
main(){int*a,Q[34],W[34],*E=&Q,*R=&W,i,y;*E=*R=E[33]=R[33]=0;F(i)E[i]=rand()+(
rand()<<16);B:F(y){R[y]=0;F(i){int x=1<<(i-1),S=E[y]&x,A=9 l(E[y-1])l(E[y])l(E[y
+1]),q=A==3||S&&A==4;R[y]|=q?x:0;printf(q?"[]":"  ");}printf("\n");}a=E;E=R;R=a;
system("sleep 0.1;clear");goto B;}
