#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


    char* sptr = (char*) malloc (1024);

    printf("Enter the string: ");
    fgets(sptr,1024,stdin);
    sptr[strcspn(sptr,"\n")] = '\0';

    int i,lenght = strlen(sptr);

    sptr = realloc(sptr, lenght +1);


    for(i=lenght-1;i>=0;i--){
        printf("%c",*(sptr+i));
    }

    free(sptr);
    
    return 0;
}


