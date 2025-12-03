#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

    char str1[50],str2[50];

    printf("Enter first String: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    
    printf("Enter second String: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';

    int len1=strlen(str1),len2 = strlen(str2);

    char* ptr = malloc(len1+len2+1);

    char* Str1 = &str1[0];
    char* Str2 = &str2[0];
    

    int i,j=0,second=0;
    for(i=0;i<len1+len2;i++){
        if(i<len1){
            ptr[i] = str1[i];
        }else{
            ptr[i] = str2[i-len1];
        }
    }

    ptr[i] = '\0';

    for(i=0;ptr[i]!='\0';i++){
        printf("%c",ptr[i]);
    }

    free(ptr);

    return 0;
}