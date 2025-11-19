#include<stdio.h>
#include<string.h>
#include<ctype.h>

int checkValidity(char a[]){
    int i,count=0;
    for(i=0;a[i]!='\0';i++){
        count++;
    }
    if(count<8){
        printf("\nLenght Check: FAIL");
        return 1;
    }else{
        printf("\nLenght Check: PASS");
    }
    for(i=0;i<count;i++){
        if(isupper(a[i])){
            printf("\nUppercase Check: PASS");
            break;
        }
    }
    if(!(i<count-1)){
        printf("\nUppercase Check: FAIL.");
        return 1;
    }
    for(i=0;i<count;i++){
        if(isdigit(a[i])){
            printf("\nDigit Check: PASS.");
            break;
        }
    }
    if(!(i<count-1)){
        printf("\nDigit Check: FAIL.");
        return 1;
    }
    for(i=0;i<count;i++){
        if(ispunct(a[i])){
            printf("\nSpecial Character Check: PASS.");
            break;
        }
    }
    if((i<count-1)){
        printf("\nSpecial Character Check: FAIL.");
        return 1;
    }
    return 0;
}
int main(){
    char password[20];
    printf("Enter your Password: ");
    fgets(password,20,stdin);
    password[strcspn(password,"\n")] = '\0';
    int result = checkValidity(password);
    if(result==0){
        printf("\nYour passsword is valid");
    }else{
        printf("\nYour password is not valid.");
    }   
}