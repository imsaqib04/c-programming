//merging to two arrays
#include<stdio.h>
void main(){
   
   int a[5]={1,3,5,7,9};
   int b[5]={2,4,6,8,10};
   int c[10];
   int i = 0;
   int j = 0;
   int k;

       for(k=0;k<10;k++){
      
         if(a[i]<b[j]){
         c[k]=a[i];
         i++;
         }

         else{
         c[k]=b[j];
         j++; 
         }
         printf("%d",c[k]);
      }


}