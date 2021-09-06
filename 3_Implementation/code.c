#include "compute.h"
#include <stdio.h>

unsigned long  amount = 1000, deposit, withdraw;
int choice, pin=0, k;
char transaction = 'y';

void main()
{
  while (pin != 1520)
  {

    printf("ENTER YOUR SECRET PIN NUMBER:");

    scanf("%d", & pin);

    if (pin != 1520)

      printf("PLEASE ENTER VALID PASSWORD! \a\n");
  }

  do

  {

    printf("\n********Welcome to XYZ Bank ATM Service***********\n");

    printf("1. Check Balance\n");

    printf("2. Withdraw Cash\n");

    printf("3. Deposit Cash\n");

    printf("4. Quit\n");

    printf("********************************************\n\n");

    printf("Enter your choice: ");

    scanf("%d", & choice);

    switch (choice)
    {

    case 1:

      balance(amount);

      break;

    case 2:

      printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

      scanf("%lu", & withdraw);
      withdrawn(withdraw,amount);
      amount = amount - withdraw;

      break;

    case 3:
      printf("\n ENTER THE AMOUNT TO DEPOSIT");

      scanf("%lu", & deposit);

      depositen(deposit,amount);
      amount = amount + deposit;

      break;

    case 4:

      printf("\n THANK YOU FOR USING XYZ Bank ATM");

      break;

    default:

      printf("\n INVALID CHOICE");
    }

    printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");

    fflush(stdin);

    scanf("%c", & transaction);

    if (transaction == 'n' || transaction == 'N')

      k = 1;

  } while (!k);

  printf("\n\n THANKS FOR USING XYZ Bank ATM SERVICE");

}