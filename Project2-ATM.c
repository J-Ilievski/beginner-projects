#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account{
    char Fname[25];
    char Lname[25];
    int UserId;
    int Password;
    double Balance;
};

void Accounts()
{
    struct Account user0001;
    user0001.UserId = 1234;
    user0001.Password = 4321;
    strcpy( user0001.Fname, "Tony");
    strcpy( user0001.Lname, "Cliff");
    user0001.Balance = 6140.80;
}
 
int main()
{
    printf("Welcome To TomatoSalad Banking\n\nPlease Enter Your Login Details \n");
    int loginUserId;
    int loginPassword;
    printf("Enter Your ID Number and Password: \n");
    scanf("%d\n%d", &loginUserId, &loginPassword);

        if(loginUserId == user0001.UserId && user0001.Password == 4321){
            printf("Login Successful\n");
        } else {
            printf("Incorrect Username or Password\n");
        }
    
    return 0;    
}