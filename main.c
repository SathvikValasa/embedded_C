/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*Program for palindrome*/
#include <stdio.h>


int
main ()
{
  int a;
  printf ("Enter a nuber to check if it is palindrome or not\n");
  scanf ("%d", &a);
int i=a;
    int s=a;
    int z = 0;
    while (a != 0)
      {
	s = a % 10;
	z = z * 10 +s;
	a = a / 10;
      }
    if (z == i)
      {
	printf ("%d is a palindrome", i);

      }
    else
      {
	printf ("%d is NOT a palindrome", i);
      }

  return 0;
}



