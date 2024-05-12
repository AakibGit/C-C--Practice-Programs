//. Write a C program to accept temperatures in Fahrenheit (F) and display it in Celsius(C)
// and Kelvin (K) (Hint: C=5.0/9(F-32), K = C + 273.15) [15 Marks]

#include<stdio.h>

int main()
{
float cel,fer,kel;

printf("Enter Temperature in Fahrenheit :");
scanf("%f",&fer);

cel= ((fer-32)*5)/9 ;
printf("Celsius = %f \n",cel);

kel = ((fer-32)*5)/9 + 273.15 ;
printf("Kelvin  = %f \n",kel);

return (0) ;
}
