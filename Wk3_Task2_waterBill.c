#include <stdio.h>
//function prototype
float calcTotalBill(float units);
 
int main(){
   float units, result;
   
   printf("Enter number of water units consumed \t");
   scanf("%f", &units);
   //function call
   result = calcTotalBill(units);
   
   printf("\n______________________________________________\n");
   printf("\nTotal water bill: Ksh %.2f ", result);
   printf("\n______________________________________________\n");
   return 0;}
   //function definition
   float calcTotalBill(float units){
   float bill;
   if (bill <=30){
   bill = units * 20;}
   
   else if(bill >30 && bill <=60){
   bill = units * 25;}
   
   else if(bill >60){
   bill = units * 30;}
   
   return bill;}