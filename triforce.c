#define P(x) putchar(x);
#define L(x,q) for(s=1;s<x;s++)P(q)
r,s;main(int X,char**Y){X=atoi(Y[1]);for(r=0;r<X;r++){L(X-r,32)if(r<X/2)L(2+r*2,90)else{L(2+r*2-X,90)L((X-r)*2,32)L(2+r*2-X,90)}P(10)}}
