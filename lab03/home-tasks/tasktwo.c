#include<stdio.h>

int main(){

    char productname[9]= "";

    printf("Enter Product Name: ");
    scanf("%s",&productname);

    float price=0;

    printf("Enter Product Price: ");
    scanf("%f", &price);

    int quantity=0;

    printf("Enter Product Quantity: ");
    scanf("%d", &quantity);

    float totalcost = price*quantity;

    printf(" %d %s(s) bought at rate of %f Dollars per %s is equal to: %f",quantity,productname,price,productname,totalcost);

    return 0;
}