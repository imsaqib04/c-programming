#include<stdio.h>
int linearSearch(int arr[],int x,int a)
{
    for(int i=0; i<a; i++)
    {
        if(arr[i]==x){
            return i;
        }
        
    }
    return -1;
}
int main(){
    int x;
    int search;
    int a=10;
    int arr[10]={10,20,30,40,50,43,2,36,998,54};
    
    printf("enter any number");
    scanf("%d",&x);
    
    search=linearSearch(arr,x,a);
    printf("%d ",search);
    return 0;
}