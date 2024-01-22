#include <stdio.h>

void main (){
    int customer_type,purchase_amount;
    double payable_amount;
    printf("Enter 1 for regular customer and enter 2 for new customer: ");
    scanf("%d",&customer_type);

    // regular means 1
    if (customer_type == 1){
        printf("Enter purchase amount: ");
        scanf("%d",&purchase_amount);

        if (purchase_amount > 1000){
            payable_amount = purchase_amount - purchase_amount * (.2);
        }else if (purchase_amount >= 500 && purchase_amount <= 1000){
            payable_amount = purchase_amount - purchase_amount * (.15);
        }else{
            payable_amount = purchase_amount - purchase_amount * (.1);
        }
        printf("Total amount to pay: %f\n",payable_amount);
    }
    else if (customer_type == 2){
        printf("Enter purchase amount: ");
        scanf("%d",&purchase_amount);

        if (purchase_amount > 1000){
            payable_amount = purchase_amount - purchase_amount * (.1);
        }else if (purchase_amount >= 500 && purchase_amount <= 1000){
            payable_amount = purchase_amount - purchase_amount * (.5);
        }else{
            payable_amount = purchase_amount - purchase_amount * (.02);
        }
        printf("Total amount to pay: %f\n",payable_amount);

    } 
    else {
        printf("Invalid input.\n");
    }
}