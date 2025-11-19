#include<stdio.h>
#include<string.h>
#define MAX 50

char* domainExtractor(char email[],char domain[]){

    char temp[2];
    int i,flip=0;

    // printf("Enter an Email: ");
    // fgets(email,MAX,stdin);
    // email[strcspn(email,"\n")]='\0';

    for(i=0;email[i]!='\0';i++){
        if(email[i]=='@'){
            flip=1;
            continue;
        }
        if(flip==1){
            temp[0] = email[i];
            strcat(domain,temp);
        }
    }

    if(strcmp(domain,"")){
        // printf("\nDomain: %s",domain);
        return domain;
    }else{
        printf("No domain found.");
        return "";
    }
}

int main(){
    char email[50],domain[50]="",temp[2];
    // int i,flip=0;

    printf("Enter an Email: ");
    fgets(email,MAX,stdin);
    email[strcspn(email,"\n")]='\0';

    char* result = domainExtractor(email,domain);

    printf("%s",result);

    return 0;
}