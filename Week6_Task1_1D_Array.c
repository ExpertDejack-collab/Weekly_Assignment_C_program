#include<stdio.h>
#include <math.h>

int main()
{
int revenue[7] = {100, 200, 300, 400, 500, 600, 700};
int i;
int total = 0;
int avrg;
   
   printf("\n Weekly revenue:");
   for(i=0; i<7; i++){
   printf("\n %d", revenue[i]);
   total = total + revenue[i];}
   avrg = total / 7;
   
   printf("\n \nTotal: Ksh. %d", total);
   printf("\nAverage: Ksh. %d", avrg);
   
    return 0;
}