#include <stdio.h>

//     1
//    121
//   12321
//  1234321
// 123454321

int main()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5 - i; j++)
    {
      printf(" ");
    }

    for (j = 1; j <= i; j++)
    {
      // printf("%d", j % 2);
      printf("%d", j);
    }

    for (j = i - 1; j >= 1; j--)
    {
      // printf("%d", j % 2);
      printf("%d", j);
    }
    printf("\n");
  }

  return 0;
}