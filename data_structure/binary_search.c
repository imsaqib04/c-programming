//shorted arr:
#include <stdio.h>
int b_search(int a[], int i, int j,int x){
    int mid = (i+j)/2;
    if(a[mid]==x){
        return mid;
    }else if(a[mid]>x){
        b_search(a,i,mid-1,x);
    }else{
        b_search(a,mid+1,j,x);
    }
}
int main() {
    int size =5;
    int i = 0;
    int j=4;
    int x;
    int a[5]={11,12,13,14,15};
    printf("enter the value of x in given value of arr:");
    scanf("%d",&x);
    int result = b_search(a,i,j,x);
    printf(" element %d found at index %d\n",x,result);
    return 0;
}
