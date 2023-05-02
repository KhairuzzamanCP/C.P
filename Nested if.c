/*
যদি সং খ্যা টি ০ এর থে কে বড় হয় তা ইলে
যদি সং খ্যা টি 2 দ্বা রা বি ভা জ্য হয় তা ইলে
সং খ্যা টি পসি টিভ এবং জো ড়

না ইলে
সং খ্যা টি পজি টিভ এবং বি জো ড়

যদি সং খ্যা টি ০ এর থে কে ছো টো হয় তা ইলে
যদি সং খ্যা টি 2 দ্বা রা বি ভা জ্য হয় তা ইলে

সং খ্যা টি নে গে টিভ এবং জো ড়
না ইলে
সং খ্যা টি নে গে টিভ এবং বি জো ড়
*/

#include<stdio.h>
int main(){
int num;
scanf("%d",&num);
if(num > 0){
   if(num %2 == 0){
    printf("The number positive and even");
   }
   else{
    printf("The number positive and odd");
   }
}
if(num < 0){

if(num %2 == 0){
   printf("The number negative and even");
}
else{
   printf("The number negative and odd");
}
}



return 0;
}

