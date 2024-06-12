// fibonacciSeries with recursion.
#include <stdio.h>
int fibonacciSeries(int n){
    if (n == 1 || n == 0){
        return 0;
    }
    else{
        return (fibonacciSeries(n- 1) + fibonacciSeries(n - 2));
    }
}
int main() {
    
    int n,i;
    printf("enter the value n:\n");
    scanf("%d",&n);
    for(i = 0; i < n; i ++){
    }
        printf("%d ", fibonacciSeries(n));
       
    return 0;
}



