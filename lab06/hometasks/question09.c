/*
Question:9
Sarah wants to track her monthly expenses more efficiently. She needs a program that can handle
multiple expense categories and provide detailed financial analysis
Program Requirements:
1. Takes Sarah&#39;s monthly income as input
2. Collects expenses for 4 categories: Food, Transport, Entertainment, Utilities
3. Calculates and displays:
o Total monthly expenses
o Remaining balance after expenses
o Savings amount and what percentage this represents of her income
o The percentage that each expense category contributes to total expenses
4. Provides personalized financial advice:
o If her savings are more than 20% of income: &quot;Excellent savings!&quot;
o If any single expense category makes up more than 40% of total expenses:
&quot;Warning: High spending in [category]&quot;
o If she spends more than her income: &quot;You are overspending!&quot;*/

#include<stdio.h>

int main(){

    float income,savings ,foodexp,transportexp,entertainmentexp,utilitiesexp;

    float savingsper,foodper,transportper,entertainmentper,utilitiesper;

    printf("Enter montly income: ");
    scanf("%f",&income);

    printf("Enter food expenses: ");
    scanf("%f",&foodexp);

    printf("Enter transport expenses: ");
    scanf("%f",&transportexp);

    printf("Enter entertainment expenses: ");
    scanf("%f",&entertainmentexp);

    printf("Enter utilities expenses: ");
    scanf("%f",&utilitiesexp);

    foodper = 100*(foodexp/income);
    transportper =  100*(transportexp/income);
    entertainmentper =  100*(entertainmentexp/income);
    utilitiesper =  100*(utilitiesexp/income);
   
    savings = income - (foodexp-transportexp-entertainmentexp-utilitiesexp);
    printf("\nYour savings are: %f",savings);

    savingsper = 100*(savings/income);
    printf("\nYour savings percentage is: %f",savingsper);
    printf("\nFood Percentage: %f\nTransport Percentage: %f\nEntertainment Percentage: %f\nUtilities Percentage: ",foodper,transportper,entertainmentper,utilitiesper);

    if(savingsper>20){
        printf("\nExcellent savings!");
    }

    if(foodper>40){
        printf("\nWarning! You're spend high in category: Food");
    }
    if(transportper>40){
        printf("\nWarning! You're spend high in category: Transport");
    }
    if(entertainmentper>40){
        printf("\nWarning! You're spend high in category: Entertainment");
    }
    if(utilitiesper>40){
        printf("\nWarning! You're spend high in category: Utilities");
    }
    if(savings<0){
        printf("\nYou're overbudjet");
    }

    return 0;
}