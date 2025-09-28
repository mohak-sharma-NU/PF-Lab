#include<stdio.h>


int main(){

    int size=0;
    int amount=0;
    float total=0;

    float small=8.00;
    float medium=16.00;
    float large=20;

    //Ask for size: 
    printf("Enter pizza size: \n1.Small($8)\n2.Medium.($16) \n3.Large.($20)\n");
    scanf("%d",&size);
    printf("\n");
    if(size<=0||size>=4){
        printf("Enter a valid size.");
    }
    else{
    }

    //number of pizzas
    // printf("How many pizzas do you want (1-3) ?");
    // scanf("%d",&amount);
    // printf("\n");

    switch(size){
        case 1:
            printf("Check out our Deals for small pizzas:\n1.One Small ($8)\n2.Two Small($15)\n3.Three Small (&21)");
                printf("\nHow many pizzas do you want?");
                scanf("%d",&amount);
                printf("\n");
                if(amount==1){
                    total+=8;
                }else if(amount==2){
                    total+=15;
                }else if(amount ==3){
                    total+=21;
                }
                else{
                    printf("Enter an integer between 1 and 3 pizzas");
                }
        break;
        case 2:
            total+=16;
            break;
        case 3:
            total+=20;
            break;
        default:
            printf("Please enter a valid pizza size.");
            break;
    }

    float justThepizza = total;

    //show deals

    // if(amount==1){
    //     total+=8;
    // }else if(amount==2){
    //     total+=15;
    // }else if(amount ==3){
    //     total+=21;
    // }
    // else{
    //     printf("Enter an integer between 1 and 3 pizzas");
    // }

    //crust type


    printf("Please enter crust type:\n0.Regular (0$)\n1.Thin ($1)\n2.Stuffed ($2)\n");
    int crust;
    scanf("%d",&crust);
    printf("\n");
    if(crust==0){
    }
    else if(crust==1){
        total+=crust;
    }
    else if(crust==2){
        total+=crust;
    }
    else{
        printf("Please Enter a valid crust type.");

    }

    //extra cheese

    printf("\nDo you want extra cheese (y/n)?");
    char a;
    scanf(" %c",&a);//The space is needed to tell scanf to ignore whitespace
    // printf("\n");
    float cheese=1.50;
    if(a=='y'||a=='Y'){
        total+=cheese;
    }
    else if(a=='n'||a=='N'){
    }
    else{
        printf("\nPlease enter Y/y for Yes or N/n for  no.");
    }

    //time discount

    
    printf("\nWhat is the time right now (hh.mm, 24hr clock) ?");
    float time=0;
    scanf("%f",&time);
    float timeDiscount;
    printf("\n");

    if(time>11&&time<14){
        timeDiscount = total*0.10;
        total+=timeDiscount;
    }
    else{
        printf("\nNo discount available at this time.");
    }

    //student discount

      
    printf("\nAre you a student(y/n)? \n");
    char b='z';
    scanf(" %c",&a);//The space is needed to tell scanf to ignore whitespace
    float studentDiscount =-2.00;
    if(b=='y'||b=='Y'){
        total+=studentDiscount;
    }
    else if(b=='n'||b=='N'){
    }
    else{
        printf("\nPlease enter Y/y for Yes or N/n for  no.");
    }

    // garlic Bread

    if(amount==3&&crust==2){
        printf("\nYou get free Garlic Bread!\n");
    }
    else{

    }
    //delivery 

    printf("Do you want 1.Delivery($3) or 2.Pickup?");
    int choice=0;
    scanf("%d",&choice);
    printf("\n");
    float delivery=3;
    if(choice==1){
        total+=delivery;
    }else{
    }
    printf("%f Pizzas\n %f Crust.\n %f Cheese.\n%f Time Discount.\n%f studentDiscount.\n%f Delivery.",justThepizza,crust,cheese,timeDiscount,studentDiscount,delivery);
    printf("Your Grand total is %f",total);
    return 0;
}