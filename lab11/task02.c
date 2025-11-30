#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
// #include<s>


struct Transaction{
    char TransactionType[20];
    float amount;
    char date[30];
};


struct Account{
    int AccNo;
    char type[50];
    float balance;
    float minBalance;
    float interest;

    char creationDate[30];
    char lastTransactionDate[30];

    struct Transaction history[100];
    int historyCount;

};

int findAccount(struct Account* acc, int total, int accNo) {
    for (int i = 0; i < total; i++) {
        if (acc[i].AccNo == accNo)
            return i;
    }
    return -1; // not found
}

void getDate(char* buffer) {
    time_t now = time(NULL);
    struct tm* t = localtime(&now);
    strftime(buffer, 30, "%Y-%m-%d %H:%M:%S", t);
}
void withdraw(struct Account* acc) {
    float amount;
    printf("Enter withdraw amount: ");
    scanf("%f", &amount);

    if (acc->balance - amount < acc->minBalance) {
        printf("Error: Insufficient balance (min balance: %.2f)\n", acc->minBalance);
        return;
    }

    acc->balance -= amount;

    // Add to history
    strcpy(acc->history[acc->historyCount].TransactionType, "WITHDRAW");
    acc->history[acc->historyCount].amount = amount;
    getDate(acc->history[acc->historyCount].date);

    acc->historyCount++;

    // Update lastTransactionDate
    getDate(acc->lastTransactionDate);

    printf("Withdrawal successful.\n");
}


void deposit(struct Account* acc) {
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f", &amount);

    acc->balance += amount;

    strcpy(acc->history[acc->historyCount].TransactionType, "DEPOSIT");
    acc->history[acc->historyCount].amount = amount;
    getDate(acc->history[acc->historyCount].date);

    acc->historyCount++;

    getDate(acc->lastTransactionDate);

    printf("Deposit successful.\n");
}


void askInfo(struct Account* acc, char* type){

    acc->AccNo = (rand()%(99999-10000+1)+10000);

    if(!(strcmp(type,"SAVINGS"))){
        strcpy(acc->type,"SAVINGS");
        acc->minBalance = 1000;
        acc->interest = 0.04;
    }else if(!(strcmp(type,"CURRENT"))){
        strcpy(acc->type,"CURRENT");
        acc->minBalance = 5000;
        acc->interest = 0.07;
    }else if(!(strcmp(type,"FIXED_DEPOSIT"))){
        strcpy(acc->type,"FIXED_DEPOSIT");
        acc->minBalance = 10000;
        acc->interest = 0;
    }else{
        printf("No Account type match.\n\n");
    }

    getDate(acc->creationDate);
    strcpy(acc->lastTransactionDate,acc->creationDate);
    // acc.AccNo = Srand;

    acc->historyCount=0;

    printf("Account Created Succesfully.\n");

}

void showTransactionHistory(struct Account* acc){
    if(acc->historyCount ==0){
        printf("No Transaction Yet.\n");
        return ;
    }

    printf("Transaction History: \n");

    for(int i=0;i<acc->historyCount;i++){
        printf("%d. %s | Amount: %.3f | Date: %s\n",
               acc->history[i].TransactionType,
               acc->history[i].amount,
               acc->history[i].date
        );
    }
}

void showAccountInfo(struct Account* acc) {
    printf("Accout Information: \n");
    printf("Account Number      : %d\n", acc->AccNo);
    printf("Account Type        : %s\n", acc->type);
    printf("Balance             : %.2f\n", acc->balance);
    printf("Minimum Balance     : %.2f\n", acc->minBalance);
    printf("Interest Rate       : %.2f%%\n", acc->interest * 100);
    printf("Creation Date       : %s\n", acc->creationDate);
    printf("Last Transaction    : %s\n", acc->lastTransactionDate);
    printf("\n\n");
}

int main(){

    srand(time(NULL));

    int n;
    printf("Enter the number of accounts you want to make.\n\n");
    scanf("%d",&n);
    getchar();

    struct Account* acc = malloc(n*sizeof(struct Account));

    int choice = 0,index=0;
    do{
        printf("\n1.Create a Savings Account.\n2.Create a Current Account.\n3.Create a Fixed Deposit Account.\nEnter what you want to do: ");
        scanf("%d",&choice);
        getchar();
        switch(choice){
            case 1:
                askInfo(&acc[index],"SAVINGS");
                index++;
                break;
            case 2:
                askInfo(&acc[index],"CURRENT");
                index++;
                break;
            case 3:
                askInfo(&acc[index],"FIXED_DEPOSIT");
                index++;
                break;
            default:
                printf("Please enter a valid value.\n");
                break;
        }
    }while(index<n);

    showAccountInfo(acc);

    int accNo, indexFound;

    do {
        printf("\nMAIN MENU\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Show Account Info\n");
        printf("4. Show Transaction History\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) break;

        printf("\nEnter Account Number: ");
        scanf("%d", &accNo);

        indexFound = findAccount(acc, n, accNo);

        if (indexFound == -1) {
            printf("Account NOT FOUND!\n");
            continue;
        }

        struct Account* selected = &acc[indexFound];

        switch (choice) {
            case 1:
                deposit(selected);
                break;
            case 2:
                withdraw(selected);
                break;
            case 3:
                showAccountInfo(selected);
                break;
            case 4:
                showTransactionHistory(selected);
                break;
            default:
                printf("Invalid choice.\n");
        }

    }while(choice != 0);

    return 0;
}