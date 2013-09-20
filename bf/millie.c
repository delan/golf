#include<stdio.h>
main(){char a[999],b[30000],c[999],d,e,f,g=0;gets(a);gets(c);while(a[e]){g=a[e];b[d]+=(g==43)?1:(g==45)?-1:0;d+=(g==62)?1:(g==60)?-1:0;if(g==46)printf("%c",b[d]);if(g==44)b[d]=c[f++];if(g==91&&!b[d])while(a[e++]!=93);if(g==93&&b[d])while(a[e--]!=91);e++;}}
