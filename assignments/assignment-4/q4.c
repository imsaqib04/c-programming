// Binary search:
#include<stdio.h>
int binary_search(int arr[],int first,int last,int x){
    if (first == last){
      if (arr[first] == x){
        return 1;
      }
        else {
            return -1;
        }
    }
    
    else{
        
    }
       int mid = (first+last)/2;
        if(arr[mid] == x){
            return mid;
        }
        else{
            if(arr[mid] > x){
                binary_search(arr,first,mid-1,x);
            }
            else{
                binary_search(arr, last,mid+1,x);
            }
        }
    }

int main(){
    int size = 10;
    int first = 0;
    int last = size-1;
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int x;
    printf("enter any value of x in the given arr\n");
    scanf("%d",&x);
    int index = binary_search(arr, first, last,x);
    printf("%d ",index);
    return 0;
}
