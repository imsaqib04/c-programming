

#include<stdio.h>
int main(){

    int size = 10;
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int x;
    printf("enter any value in given arr elements\n");
    scanf("%d",&x);
    int index = linear_search(a,size,x);
    printf("%d",index);
    return 0;
}


int linear_search(int a[],int size, int x){
    int i;
        for(i = 0; i<size; i++){
            if(a[i] ==x){
                return i;
            }
        }
        return -1;
}
