#include<stdio.h>

int main(){
    char room,action;
    printf("Enter the user's room: \n'L' for living room.\n'K' for Kitchen\n");
    scanf(" %c",&room);
    switch(room){
        case 'L':
            printf("Enter Action:\n'T' for Temperature.\n'L' for Lights\n");
            scanf(" %c",&action);
            switch(action){
                case 'L':
                    printf("Turning on bright task lighting.");
                    break;
                case 'T':
                    printf("Setting kitchen temperature.");
                    break;
                default:
                    printf("Invalid Action.");
                    break;
            }
            break;
        case 'K':
            printf("Enter Action:\n'T' for Temperature.\n'L' for Lights\n");
            scanf(" %c",&action);
            switch(action){
                case 'L':
                    printf("Turning on bright task lighting.");
                    break;
                case 'T':
                    printf("Setting kitchen temperature.");
                    break;
                default:
                    printf("Invalid Action.");
                    break;
            }
            break;
        default:
            printf("Invalid Room.");
            break;
    }
    return 0;
}