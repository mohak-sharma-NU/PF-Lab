#include<stdio.h>

int tempCheck(int temp){
    if(temp<10){
        return 2;
    }else if(temp>15&&temp<25){
        return 3;
    }else if(temp>35){
        return 1;
    }else{
        return 4;
    }
}

int main(){

    int temp;

    printf("Enter your temperature: ");
    scanf("%d",&temp);

    int result = tempCheck(temp);

    switch(result){
        case 1:
            printf("Heat Alert.");
            break;
        case 2:
            printf("Cold Alert.");
            break;
        case 3:
            printf("Comfort Zone.");
            break;
        case 4:
            printf("NOrmal Temperature.");
            break;
    }
    return 0;
}