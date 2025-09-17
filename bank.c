#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char user_password[10],  password[10]  ;
float user_money, amount ;
char user_name[15] ;

int Withdraw (){
    while(1){
        printf ("enter a password: ");
        scanf ("%s", &password);
        int len_pass = strlen(password);
        if (len_pass != 4){
            printf ("erorr, the len number incorrect:\n ");
        }else{
            break;
        }
    }
    while(1){
        if (strcmp(password, user_password) != 0){
            printf ("wrong password:\n ");
            printf ("enter a password: ");
            scanf ("%s", &password);
        }
        else{
            break;
        }
    }
    while(1){
        printf ("enter amount: ");
        scanf ("%f", &amount);
        if (amount <= 0){
            printf ("please enter a valid number\n");
            continue;
        }
        if (amount > user_money){
            printf("sorry, you not enough money\n");
        }
        else{
            user_money-= amount;
            printf ("A successful operation\nyour money now %.2f\n", user_money);
            break;
        }
    }
}    
int Deposit (){
    while(1){
        printf ("enter a password: ");
        scanf ("%s", &password);
        int len_pass = strlen(password);
        if (len_pass != 4){
            printf ("erorr, the len number incorrect:\n ");
        }else{
            break;
        }
    }
    while(1){
        if (strcmp(password, user_password) != 0){
            printf ("wrong password\n: ");
            printf ("enter a password: ");
            scanf ("%s", &password);
        }
        else{
            break;
        }
    }
    while(1){
        printf ("enter a amount: ");
        scanf("%f", &amount);
        if (amount <= 0){
            printf ("please enter a valid number\n");
        }else{
            user_money+=amount;
            printf ("A successful operation\nyour money now %.2f\n", user_money);
            break;
        }
    }
}

void main (){
    char ask1[10] ;
    int choose ;
    printf ("Welcome to Banque du Caire\n");

    printf ("enter a name: ");
    scanf ("%s", &user_name);

    while(1){
        printf ("enter a password: ");
        scanf ("%s", &user_password);
        int len_pass = strlen(user_password);
        if (len_pass != 4){
            printf ("erorr, the len number incorrect please enter '4' numbers:\n ");
        }else{
            break;
        }
    }

    while(1){
        printf ("enter a money: ");
        scanf ("%f", &user_money);
        if (user_money < 0){
            printf ("invalid number:\n ");
        }else{
            break;
        }
    }
    printf ("welcome %s do you want any operation: (yes, no): ", user_name);
    scanf ("%s", &ask1);
    int chose ;

    if (strcmp(ask1, "yes")  == 0){
        while(1){
            printf ("1.Withdraw / 2.Deposit: ");
            scanf("%d", &choose);
            while(1){
                if (choose == 1){
                    Withdraw();
                    
                }
                else if ( choose == 2){
                    Deposit();
                }
                else{
                    printf ("Wrong choice");
                }
                printf ("1.home / 2.try again / 3.exit ");
                scanf("%d", &chose);
                if (chose == 1){
                    break;
                }
                else if (chose == 2){
                    continue;
                }
                else{
                    exit(0);
                }
            }
        }
    }
    else{
        printf ("okay, have a nice time: ");
    }

    
}