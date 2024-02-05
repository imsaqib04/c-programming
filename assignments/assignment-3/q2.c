// arr:
#include<stdio.h>
void main(){
    int small;
    int large;

    int a[10]={2,4,10,1,50,100,76,42,97,5};
    small = large = a[0];

    for(int i = 0; i<=9;i++){
        if(a[i]>large){
            large = a[i];
        }
        if(a[i]<small){
            small = a[i];
        }
    }
    printf("the large number is: %d \n",large);
    printf("the smallest number is: %d",small);
}


 
