#include <stdio.h>
#include <math.h>

void main(){
    int sum = 0,start=1;
    int range;
    printf("Enter number range to check :");
    scanf("%d",&range);

    while (start <=range){
        int x = pow(2,start);
        printf("%d",x);

        if(start != range) {
            printf(" + ",start);
            
        }
        sum = sum + x;
        start++;
    }

    printf("\nSum is : %d\n",sum);
}