#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*layout:
    Restaurant Bill Write a program that computes the tax and tip on a restaurant bill for a patron. 
    The program should accept the tax and tip both as percentages from the command line.
    Display the meal cost, tax amount, tip amount, and total bill on the screen. 
    The meal cost should be randomly chosen between the following four:
    Salad: $9.95
    Soup: $4.55
    Sandwich: $13.2
    5Pizza: $22.35
*/


int main(){
    float price[] = {9.95, 4.55, 13.25, 22.35};   // sadad, soup, sandwich, pizza
    float tax, tip;
    time_t t;
    srand((unsigned)time(&t));

    printf("What is the tax percentage?\n");        
    scanf("%f", &tax);                              //user input tax percentage 0.***
    printf("What is the tip percentage?\n");        
    scanf("%f", &tip);                              //user input tip percentage 0.***

    float mealPrice = price[rand() %4];             //rand selects which meal plan

    printf("meal cost = %f \n", mealPrice);
    printf("tax cost = %f \n", tax*mealPrice);
    printf("tip cost = %f \n", tip*mealPrice);
    printf("total cost = %f \n", mealPrice + tax*mealPrice + tip*mealPrice);
    return 0;
}