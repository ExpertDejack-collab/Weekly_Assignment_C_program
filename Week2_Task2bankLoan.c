#include <stdio.h>

//Bank program to determine whether one qualified for a loan
int main() {
    int age; //d
    double income; //lf

    //prompting the user to enter age and annual income
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (KSh): ");
    scanf("%lf", &income);

    //Checking whether age and income meet Bank's requirements
    if (age >= 21 && income >= 21000) {
        printf("\nCongratulations you qualify for a loan.\n");
    } else {
        printf("\nUnfortunately, we are unable to offer you a loan at this time\n");
    }

    return 0;
}