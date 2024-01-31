# include <stdio.h>
int main(){
    int year;

    //leap year is devisible by 4
    //however year divisible by 100 are not aleap year then they are divisible by 400
    printf("enter th eyear");
    scanf("%d",&year);


    if((year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0)){
        printf("given year is a leap year\n", year);
    }else{
        printf(" given year is not a leap year\n");
    }

    return 0;
}