#include<stdio.h>
#include<string.h>

int main(){
    char username[]="";
    int password;
    printf("Enter your username:");
    scanf("%s",&username);
    // printf("%s",username);
    if(strcmp(username,"Tony")!=0){
        printf("Username not found.");
    }else{
        printf("Enter your password: ");
        scanf("%d",&password);
        if(password=12345){
            printf("Welcome, Tony Stark");
        }
        else{
            printf("Invlaid password.");
        }
    }
    return 0;
}