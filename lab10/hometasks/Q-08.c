#include<stdio.h>

void displayMenu(char appetizers[][50],char mainCourse[][50],char Desserts[][50],float prices[3][3]){

    int i,j;
    printf("\tStarters:\nMenu\t\t\tItem\n\n");
    for(i=0;i<3;i++){
        printf("%s\t\t%f\n",appetizers[i],prices[0][i]);
    }

    printf("\tMain Courses:\nMenu\t\t\tItem\n\n");
    for(i=0;i<3;i++){
        printf("%s\t\t%f\n",mainCourse[i],prices[1][i]);
    }
    
    printf("\tDesserts:\nMenu\t\t\tItem\n\n");
    for(i=0;i<3;i++){
        printf("%s\t\t%f\n",Desserts[i],prices[2][i]);
    }

    return;
}

void budget(char appetizers[][50],char mainCourse[][50],char Desserts[][50],float prices[3][3]){
    printf("\n\n=====BUDGET MENU=====\n\n");
    int i,j;
    printf("\tStarters:\nMenu\t\t\tItem\n\n");
    for(i=0;i<3;i++){
        if(prices[0][i]<10){
            printf("%s\t\t%f\n",appetizers[i],prices[0][i]);
        }
    }

    printf("\tMain Courses:\nMenu\t\t\tItem\n\n");
    for(i=0;i<3;i++){
        if(prices[1][i]<10){
            printf("%s\t\t%f\n",mainCourse[i],prices[1][i]);
        }
    }
    
    printf("\tDesserts:\nMenu\t\t\tItem\n\n");
    for(i=0;i<3;i++){
        if(prices[2][i]<10){
            printf("%s\t\t%f\n",Desserts[i],prices[2][i]);
        }
    }

    return ;
}
int main(){

    char appetizers[][50]={
        "Garlic Bread",
        "Chicken Wings",
        "Ceasar Salad"
    };

    char mainCourse[][50]={
        "Grilled Chicken Alfredo",
        "Burger With Fries",
        "Veggie Stir Fry"
    };

    char Desserts[][50]={
        "ChocoLava Cake",
        "New York Cheese",
        "IceCream Sundae"
    };

    float prices[3][3]={
        {6.50,9.00,8.25},
        {14.99,12.50,9.75},
        {7.50,8.00,5.50}
    };

    //each index assigned a diff item.

    displayMenu(appetizers,mainCourse,Desserts,prices);

    budget(appetizers,mainCourse,Desserts,prices);


    return 0;
}