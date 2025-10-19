#include<stdio.h>

int main(){

    char word[50];
    printf("Enter a SINGLE word(all in lowercase): ");
    scanf("%s",word);

    char letter;
    int count=0,vowelcount=0,conscount=0;    

    do{
        letter = word[count];
        if(letter=='\0')
            break;
        switch(letter){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowelcount++;
                break;
            case 'b':
            case 'c':
            case 'd':
            case 'f':
            case 'g':
            case 'h':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
                conscount++;
                break;
            default:
                printf("Invalid Character at index: %d",count);
                break;
        }
        count++;
    }while(letter!='\0');
    printf("\nIn %s, there are %d Vowels and %d Consonants.",word,vowelcount,conscount);
    return 0;
}