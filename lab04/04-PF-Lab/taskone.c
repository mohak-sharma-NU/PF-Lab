#include<stdio.h>


int askpizzaslice(){

    printf("Enter pizza size: \n1.Small\n2.Medium.\n3.Large.\n");
    int size;
    scanf("%d",&size);
    if(size<=0||size>=4){
        printf("Enter a valid size.");
    }
    else{
        return size;
    }

}

int main(){

    int result = askpizzaslice();

}