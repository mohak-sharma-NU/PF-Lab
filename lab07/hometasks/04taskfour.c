#include<stdio.h>
#include<ctype.h>

int main(){

    char sentence[100]="";
    printf("enter small a sentence: \n");
    scanf("%[^\n]",sentence);
    char tocheck;
    for(int i=0;sentence[i]!='\0';i++){

        tocheck = sentence[i];
        int ascii = tocheck;
        if(ascii>=65&&ascii<=90){
            switch(tocheck){
                case 'A':
                    sentence[i] = 'a';
                    break;
                case 'B':
                    sentence[i] = 'b';
                    break;
                case 'C':
                    sentence[i] = 'c';
                    break;
                case 'D':
                    sentence[i] = 'd';
                    break;
                case 'E':
                    sentence[i] = 'e';
                    break;
                case 'F':
                    sentence[i] = 'f';
                    break;
                case 'G':
                    sentence[i] = 'g';
                    break;
                case 'H':
                    sentence[i] = 'h';
                    break;
                case 'I':
                    sentence[i] = 'i';
                    break;
                case 'J':
                    sentence[i] = 'j';
                    break;
                case 'K':
                    sentence[i] = 'k';
                    break;
                case 'L':
                    sentence[i] = 'l';
                    break;
                case 'M':
                    sentence[i] = 'm';
                    break;
                case 'N':
                    sentence[i] = 'n';
                    break;
                case 'O':
                    sentence[i] = 'o';
                    break;
                case 'P':
                    sentence[i] = 'p';
                    break;
                case 'Q':
                    sentence[i] = 'q';
                    break;
                case 'R':
                    sentence[i] = 'r';
                    break;
                case 'S':
                    sentence[i] = 's';
                    break;
                case 'T':
                    sentence[i] = 't';
                    break;
                case 'U':
                    sentence[i] = 'u';
                    break;
                case 'V':
                    sentence[i] = 'v';
                    break;
                case 'W':
                    sentence[i] = 'w';
                    break;
                case 'X':
                    sentence[i] = 'x';
                    break;
                case 'Y':
                    sentence[i] = 'y';
                    break;
                case 'Z':
                    sentence[i] = 'z';
                    break;
            }
        }else if(ascii>=97&&ascii<=122){
            switch(tocheck){
                case 'a':
                    sentence[i] = 'A';
                    break;
                case 'b':
                    sentence[i] = 'B';
                    break;
                case 'c':
                    sentence[i] = 'C';
                    break;
                case 'd':
                    sentence[i] = 'D';
                    break;
                case 'e':
                    sentence[i] = 'E';
                    break;
                case 'f':
                    sentence[i] = 'F';
                    break;
                case 'g':
                    sentence[i] = 'G';
                    break;
                case 'h':
                    sentence[i] = 'H';
                    break;
                case 'i':
                    sentence[i] = 'I';
                    break;
                case 'j':
                    sentence[i] = 'J';
                    break;
                case 'k':
                    sentence[i] = 'K';
                    break;
                case 'l':
                    sentence[i] = 'L';
                    break;
                case 'm':
                    sentence[i] = 'M';
                    break;
                case 'n':
                    sentence[i] = 'N';
                    break;
                case 'o':
                    sentence[i] = 'O';
                    break;
                case 'p':
                    sentence[i] = 'P';
                    break;
                case 'q':
                    sentence[i] = 'Q';
                    break;
                case 'r':
                    sentence[i] = 'R';
                    break;
                case 's':
                    sentence[i] = 'S';
                    break;
                case 't':
                    sentence[i] = 'T';
                    break;
                case 'u':
                    sentence[i] = 'U';
                    break;
                case 'v':
                    sentence[i] = 'V';
                    break;
                case 'w':
                    sentence[i] = 'W';
                    break;
                case 'x':
                    sentence[i] = 'X';
                    break;
                case 'y':
                    sentence[i] = 'Y';
                    break;
                case 'z':
                    sentence[i] = 'Z';
                    break;
            }
        }else{
            //Anything that not an alphabet is simply ingnored
        }
    }
    printf("%s",sentence);
    return 0;
}