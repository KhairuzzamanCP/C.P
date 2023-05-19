
#include<stdio.h>
int main(){

int n,i;
scanf("%d",&n);
int arr[n+1];
while(1){
for(i=0;i<n;i++){

    scanf("%d",&arr[i]);

}
int pos,value;

    scanf("%d %d", &pos,&value);
    printf("insert element\n");

    for(i = n; i>=pos+1;i--) {

    arr[i]= arr[i-1];
    }

        arr[pos]= value;
          for(i=0; i<=n;i++){
          printf("%d\n",arr[i]);
        }
}
return 0;
}

