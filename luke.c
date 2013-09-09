#include<stdio.h>
main(){char a[999];char b[30000];char c[999];char d,e,f,g=0;gets(a);gets(c);while(a[e]){g=a[e];if(g=='+')b[d]++;if(g=='-')b[d]--;if(g=='>')d++;if(g=='<')d--;if(g=='.')printf("%c",b[d]);if(g==',')b[d]=c[f++];if(g=='['&&!b[d])while(a[e++]!=']');if(g==']'&&b[d])while(a[e--]!='[');e++;}}
