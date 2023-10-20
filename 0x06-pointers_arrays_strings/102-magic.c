#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * This is where you write your code....
   * Remember:
   * - It is forbidden for you to use a.
   * - It is not permitted for you to alter P.
   * - only 1 statement
   * - This line of code is the only 1 you may write in code.
   */
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
