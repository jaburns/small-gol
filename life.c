#define F(n)for(n=1;n<33;n++)
#define l(a)+!(2*a&x)+!(a&x)+!(a>>1&x)
main(){int*a,Q[34],W[34],*E=Q,*R=W,i,y;srand(time(*E=E[33]=0));F(i)E[i]=rand()<<
8;B:F(y){R[y]=0;F(i){int x=1<<(i-1),A=l(E[y-1])l(E[y])l(E[y+1]),q=A==6||E[y]&x&&
A==5;R[y]|=q?x:0;printf(q?"[]":"  ");}puts("");}a=E;E=R;R=a;system(
"sleep 0.1;clear");goto B;}
