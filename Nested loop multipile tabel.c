#include<stdio.h>
int main(){

int j,n;

scanf("%d",&n);
for(j =1;j<=n;j++){

for(int i =1 ;i<=10; i++){

int s = j*i;
printf("%d * %d = %d\n",j, i, s);
}
printf("\n");
}

return 0;

}

