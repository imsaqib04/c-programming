#include<stdio.h>
#include<stdlib.h>

// find square in arr:

void main(){
    int a[500];
    int i;
    int n;

    printf("Enter the number:");
    scanf("%d",&n);

    for(i= 0; i <=n; i++){
        a[i] = i*i;
    }
     
    printf("%d",a[n]);
}