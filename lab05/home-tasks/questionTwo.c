#include<stdio.h>

int main(){
    int powerstate;
    char lightstate;
    printf("Enter the power state:\n1.On\n0.Off\n");
    scanf("%d",&powerstate);
    if(powerstate==1){
        printf("Enter the light color:\n'R' or 'r' for Red.\n'Y' or 'y' for Yellow.\n'G' or 'g' for Green.\n");
        scanf(" %c",&lightstate);
        if(lightstate=='R'||lightstate=='r'){
            printf("Stop.");
        }else if(lightstate=='Y'||lightstate=='y'){
            printf("Caution.");
        }else if(lightstate=='G'||lightstate=='g'){
            printf("Go!");
        }else{
            printf("Invalid Light State");
        }
    }else if(powerstate==0){
        printf("Signal Off.");
    }else{
        printf("Invalid power state.");
    }
    return 0;
}