#include<stdio.h>
#include<string.h>


char* encrypt(char msg[]){

    int i;

    for(i=0;msg[i]!='\0';i++){

        if(msg[i]==' '){
            continue;
        }
        msg[i]+=3;
        
    }
    return msg;
}

char* decrypt(char encrypted[]){

    int i;

    for(i=0;encrypted[i]!='\0';i++){

        if(encrypted[i]==' '){
            continue;
        }
        encrypted[i]-=3;
        
    }
    return encrypted;

}

int main(){

    char msg[100];
    printf("\nEnter a message to encrpt it: ");
    fgets(msg,100,stdin);
    msg[strcspn(msg,"\n")]='\0';

    char* result = encrypt(msg);

    printf("\nEncrypted Message: %s",result);

    result = decrypt(result);

    printf("\nDecrypted Message: %s",result);

    return 0;
}