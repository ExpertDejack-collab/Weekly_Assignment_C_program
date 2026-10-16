#include <stdio.h>

int main(){
   int attendance, avrg_marks;
   
   printf("Enter your attendance(e.g 65%%): \t");
   scanf("%d", &attendance);
   printf("Enter your Average Marks(e.g 50): \t");
   scanf("%d", &avrg_marks);
   
   if(attendance >= 75 && avrg_marks >=40){
   printf("\n______________________________________________\n");
   printf("\n Eligible");
   printf("\n______________________________________________\n");}
   
   else {
   printf("\n______________________________________________\n");
   printf("\n Not Eligible");
   printf("\n______________________________________________\n");}
   
   return 0;
   }
   