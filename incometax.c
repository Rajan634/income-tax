#include <stdio.h>

int main(){
  
  float tax = 0, income;
  
  
  // Input frome user income 
  printf("Enter Your Income :");
  scanf("%f", & income);
   
   // calculat the income using logical operator
  if(income >= 250000 && income <= 500000){
    
    tax = tax + 0.5 * ( income - 250000);
  }
  
  if(income >= 500000 && income <= 1000000){
    
    tax = tax + 0.10 * ( income - 500000);
  }
  if(income>= 1000000){
    
    tax = tax + 0.30 * (income - 1000000 );
  }
  
  printf("your net income to be paid 26th of this month's %f\n",tax);

 return 0;
 }