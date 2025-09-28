#include<stdio.h>

int main(){

    //Learning bitwise operators:
    // 1 = 00000001
    int READ = 1;
    int WRITE = READ << 1;
    int EXECUTE = READ << 2;

    // printf("READ:%d\tWRITE:%d\nEXECUTE:%d",READ,WRITE,EXECUTE);

    int permission = 3;
    /*Can be 1(READ-only)
    2(WRITE-Only)
    3(READ and WRITE-only)
    4(EXECUTE)*/

    //Binary rep:
    /*
    1 = 00000001
    2 = 00000010
    3 = 00000011
    4 = 00000100
    */
    if(permission==READ){
        printf("Access Granted: READ only.");
    }
    else if(permission==WRITE){
        printf("Access Granted: WRITE only");
    }
    else if(permission==READ<<2){
        printf("Access Granted: Full Control.");
    }
    else if(permission == READ | WRITE){
        printf("Access Granted: READ and WRITE.");    
    }
    else{
        printf("Invalid Input.");
    }
    return 0;
}