#include "unity.h"
#include <compute.h>

/* Modify these two lines according to the project */
#include <compute.h>
#define PROJECT_NAME    "BANKING"

/* Prototypes for all the test functions */
void test_balance(void);
void test_withdraw(void);
void test_deposit(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_balance);
  RUN_TEST(test_withdraw);
  RUN_TEST(test_deposit);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_balance(void) {
  TEST_ASSERT_EQUAL(1000, balance(1000));
}
void test_withdraw(void) {
  TEST_ASSERT_EQUAL(500, withdrawn(500, 1000));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_deposit(void) {
  TEST_ASSERT_EQUAL(1500, depositen(500, 1000));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

