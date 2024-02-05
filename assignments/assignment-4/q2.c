// fibonacciSeries with recursion.
#include <stdio.h>
int fibonacciSeries(n){
    if (n <= 1)
        return n;
    else
        return (fibonacciSeries(n- 1) + fibonacciSeries(n - 2));
}
int main(void) {
    
    int n,i;
    printf("enter the value n");
    scanf("%d",&n);
    for(i = 0; i < n; i ++){
    }
        printf("%d ", fibonacciSeries(n));
       
    return 0;
}


