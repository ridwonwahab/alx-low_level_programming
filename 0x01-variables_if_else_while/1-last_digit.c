#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/** betty style doc for function main goes there
 * main method
 */

int main(void)

{

  int n;
  int ballance;


  srand(time(0));

  n = rand() - RAND_MAX / 2;

  /* your code goes there */
  
  ballance = n % 10;
  if (ballance > 5)
    {
      printf("Last digit of %d is %d and is greater than 5\n", n, ballance);
    }
  else if (ballance == 0)
    {
      printf("Last digit of %d is %d and is 0\n", n, ballance);
    }
  else if (ballance < 6 && !(ballance == 0) )
    {
      printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ballance);
    }


  return (0);

}
