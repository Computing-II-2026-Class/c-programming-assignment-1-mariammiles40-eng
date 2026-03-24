/* 
*Name:        NAKANWAGI MARIAM 
*students ID: 2500801403 : 25/U/BIE/01403/PE 
*/ 

#include <stdio.h>

int main(){

float amount;
float trans;
float transaction;
float amount_deducted;

printf("Enter amount to send: ");
scanf("%f", &amount);

printf("Enter transaction fee: %");
scanf("%f", &trans);

transaction = amount * (trans/100.00);
amount_deducted = (amount + transaction);

printf("Tranaction fee:%.2f \n", transaction);
printf("Amount deducted:%.2f ", amount_deducted);
    

    return 0;
}
