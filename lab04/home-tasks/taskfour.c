#include<stdio.h>

float crustType(float total){
    //Question 4
    char crust[10]="";
    printf("Please enter crust type:\n1.Regular (0$)\n2.Thin ($1)\n3.Stuffed ($2)\n");
    int no;
    scanf("%d",&no);
    if(no==1){
        return 0;
    }
    else if(no==2){
        total+=1;
        return total;
    }
    else if(no==3){
        total+=2;
        return total;
    }
    else{
        printf("Please Enter a valid crust type.");
        return total;
    }
    
}

int main(){

    int amount;
    float total=0;
    float result = crustType(total);

    printf("Yout total with crust is: %f",result);

}