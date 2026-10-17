#include <stdio.h>
//function prototype
float calcTax(float gross_salary);

int main(){
    float gross_salary, result, net_salary;
    printf("Enter your gross salary: \t");
    scanf("%f", &gross_salary);
    //function call
    result = calcTax(gross_salary);
    net_salary = gross_salary - result;

    printf("\n______________________________________________\n");
    printf("Employee Salary\n");
    printf("______________________________________________\n");
    printf("Gross salary: %.2f \n", gross_salary);
    printf("Tax: %.2f \n", result);
    printf("Net salary: %.2f \n", net_salary);
    printf("______________________________________________\n");
    
    return 0;}
//function definition
float calcTax(float gross_salary){
    float tax;
    if(tax <30000){
        tax = 0.05 * gross_salary;
    }
    else if(tax >=30000 && tax <=59999){
        tax = 0.1 * gross_salary;
    }
    else if(tax >=60000){
        tax = 0.15 * gross_salary;
    }
   return tax;}