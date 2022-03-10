#include <stdio.h>

/**
*main - to print the size of various types on the computer it is compiled and run on
*return 0 if it complied well else return non-zero character
*/

int main(void)
{
  pritnf("Size of a char: %d byte(s)\n", sizeof(char));
  printf("Size of a int: %d byte(s)\n", sizeof(int));
  printf("Size of a long int: %d byte(s)\n", sizeof(long int));
  printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
  printf("Size of a float: %d byte(s)\n", sizeof(float));
  return (0);
}
         
