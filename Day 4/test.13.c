#include <stdio.h>
#include <math.h>

void main(){
   int sum=0,start=1;
    int range;
    printf("Enter number range to check :");
    scanf("%d",&range);

    while (start <=range){
        printf("%d^2",start);

        if(start != range) {
            printf("+ ",start);
            
        }
        sum = sum + pow(start,2);
        start++;
    }

    printf("\nSum is : %d\n",sum);
}