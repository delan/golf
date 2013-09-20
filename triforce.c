#define P(x) putchar(x);
#define L(x,q) for(t=1;t<x;t++)P(q)
r,s,t;main(int X,char**Y){X=atoi(Y[1]);for(r=0;r<X;r++){for(s=X-r-1;s;s--)P(32)if(r<X/2)L(2+r*2,90)else{L(2+r*2-X,90)L((X-r)*2,32)L(2+r*2-X,90)}P(10)}}
