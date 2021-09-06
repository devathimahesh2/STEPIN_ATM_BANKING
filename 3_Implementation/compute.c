#include<stdio.h>
int balance(unsigned long amount)
{
  printf("\n YOUR BALANCE IS TK : %lu ", amount);
}
int withdrawn(int withdraw, unsigned long amount)
{

      if (withdraw % 100 != 0)

      {

        printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

      } else if (withdraw > (amount - 500))
      {

        printf("\n INSUFFICENT BALANCE");
      } else

      {

        amount = amount - withdraw;

        printf("\n\n PLEASE COLLECT CASH");

        printf("\n YOUR BALANCE IS TK : %lu ", amount);
      }
}

int depositen(int deposit, unsigned long amount)
{


      amount = amount + deposit;

      printf("\n YOUR BALANCE IS TK : %lu ", amount);

}
