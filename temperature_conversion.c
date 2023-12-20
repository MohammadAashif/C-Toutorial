#include<stdio.h>
void main(){
    int unit;
    printf("enter 1 and 2for temp conversion for c and f ");
    scanf("%d",&unit);
   float f,c;
   switch(unit){
   case 1:
    printf("enter temperature in celcius ");1
    
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("the value of celcius in faherenheit is%f:",f);
    break;
   case 2:
        printf("enter temperature in faherenheit ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("the value of celcius in faherenheit is%f:",c);
    break;

   }
}