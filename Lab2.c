#include <stdlib.h>
#include <stdio.h>
int main()
{
  int a,b;
  printf ("vvedite summu ne menee 1k;a=");
scanf("%d",&a);
printf ("\n");
 if (a<1000) {
   printf ("error summa menee 1k");
   return 0;
 }
printf ("vvedite srok vklada ot 0 do 365;b=");scanf("%d",&b);
printf ("\n");
 if (b<0 || b>365) {
   printf("error ne vernoe kolichestvo dney");
   return 0;
}
 if (b>=0 && b<=30)
   a=a*0.9;
 if (b>=31 && b<=120)
   a=a*1.02;
 if (b>=121 && b<=240)
   a=a*1.06;
if (b>=241 && b<=365)
  a=a*1.12;
 printf("summa v konce sroka=%d",a);
 printf ("\n");
}
