#include<stdio.h>
void increament (){
    int a;
    static int b;
    a++;
    b++;
    printf("%d %d\n",a,b);
}

int main(){
    increament();
    increament();
    increament();
    return 0;
    
}