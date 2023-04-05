
#include<stdio.h>
int main(){
 int a,b;


 printf("Enter a First Number " );
  scanf("%d",&a);
 printf("Enter a Second Number " );
 scanf("%d",&b);
 printf("------------------\n");
  printf("%d + %d = %d\n",a,b,a+b);
  printf("%d - %d = %d\n",a,b,a-b);
  printf("%d * %d = %d\n",a,b,a*b);
  printf("%d / %d =%0.2f\n",a,b, a*1.0/b);




return 0;
}
