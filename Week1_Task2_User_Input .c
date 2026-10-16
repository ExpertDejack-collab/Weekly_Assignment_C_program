#include <stdio.h>

int main() {
    double height;//lf
    double bank_balance;//lf
    char phoneNumber[20]; //s
    char unit[10];//s

    //Input of height, unit,bank balance, phone number
    printf("Enter your height (e.g. 2.5 or 250): ");
    scanf("%lf", &height);

    printf("Enter height unit (m or cm): ");
    scanf("%s", &unit);

    printf("Enter your bank balance (in KSh): ");
    scanf("%lf", &bank_balance);

    printf("Enter your phone number: ");
    scanf("%s", &phoneNumber);

    //Output of height, unit, bank balance, phone number
    printf("\nYOUR DETAILS ARE:\n");
    printf("Height : %.2lf %s\n", height, unit);
    printf("Bank Balance : KSh %.2lf\n", bank_balance);
    printf("Phone Number : %s\n", phoneNumber);

    return 0;
}