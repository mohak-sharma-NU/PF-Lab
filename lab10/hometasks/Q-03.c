#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char input[100];

    printf("Enter a sentence to count the number of: \n1.Vowels\n2.Consonants\n3.Digits\n4.Spaces: ");
    fgets(input,100,stdin);
    input[strcspn(input,"\n")]='\0';

    int count[4]={0};
    //Using frequency array, to count indivisual vowels,consonants,digits,spaces,
    //0 for vowels,1 for consonants, 2 for digits, 3 for spaces

    int i;
    char temp[2];
    for(i=0;input[i]!='\0';i++){
        temp[0]=input[i];
        if(isalpha(input[i])){
            if(input[i]=='A'||input[i]=='a'||
               input[i]=='E'||input[i]=='e'||
               input[i]=='I'||input[i]=='i'||
               input[i]=='O'||input[i]=='o'||
               input[i]=='U'||input[i]=='u'){
                count[0]++;
            }else{
                count[1]++;
            }
        }else if(isdigit(input[i])){
            count[2]++;
        }else if(!(strcmp(temp," "))){
            count[3]++;
        }
    }

    for(i=0;i<4;i++){
        switch(i){
            case 0:
                printf("Vowels: %d\n",count[i]);
                break;
            case 1:
                printf("Cosonants: %d\n",count[i]);
                break;
            case 2:
                printf("Digits: %d\n",count[i]);
                break;
            case 3:
                printf("Spaces: %d\n",count[i]);
                break;
        }
    }

    return 0;
}