#include<stdio.h>
int balance(unsigned long amount)
{
  int amt=amount;
  printf("\n YOUR BALANCE IS TK : %lu ", amount);
  return amt;
}
int withdrawn(int withdraw, unsigned long amount)
{
  int amt;

      if (withdraw % 100 != 0)

      {

        printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

      } else if (withdraw > (amount- 500))
      {

        printf("\n INSUFFICENT BALANCE");
      } else

      {

        amount = amount - withdraw;
        amt=amount;
        printf("\n\n PLEASE COLLECT CASH");
        printf("\n YOUR BALANCE IS TK : %lu ", amount);
        return amt;
      }
}

int depositen(int deposit, unsigned long amount)
{


      amount = amount + deposit;

      printf("\n YOUR BALANCE IS TK : %lu ", amount);
      return amount;

}
