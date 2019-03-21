
#include <cs50.h>
#include <stdio.h>

//add
int main(void)
{
  //prompt user for x
  int x = get_float("x: ");

  //prompt user for y
  int y = get_float("y: ");

  //perform arithmetic
  printf("%d divide %d is %.10d\n", x, y, x / y);


}