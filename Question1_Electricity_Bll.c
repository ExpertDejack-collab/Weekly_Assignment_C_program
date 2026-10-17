#include <stdio.h>
//function prototype
float calculateBill(float unitsConsumed);

int main(){
    float units, total;
    
    printf("Enter the number of units consumed: \t");
    scanf("%f", &units);
    
    total = calculateBill(units); //function call
    
    printf("\n______________________________________________\n");
    printf("RANGE POWER COMPANY\n");
    printf("______________________________________________\n");
    printf("Units consumed: %.2f \n", units);
    printf("Total electricity bill: Ksh %.2f \n", total);
    printf("______________________________________________");
    
    return 0;
    }
    //function definition
    float calculateBill(float unitsConsumed){ 
        float bill;
        if (unitsConsumed <=100){
        bill = unitsConsumed * 10;}
        
        else if(unitsConsumed >100 && unitsConsumed <=200){
        bill = unitsConsumed * 15;}
        
        else if(unitsConsumed >200){
        bill = unitsConsumed * 20;}
        return bill;
        }