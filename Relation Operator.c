#include <stdio.h>
#include <math.h>

int main()

{
  int x, y, z;

  x = 10;
  y = 19;
  z = 28;

  printf("Less Than (<) operator: \n");
  printf("\t x < y : %d\n", x < y);
  printf("\t y < x : %d\n\n", y < x);

  printf("Less Than O r Equal to (<=) operator: \n");
  printf("\t x <= y : %d\n", x <= y);
  printf("\t y <= x : %d\n\n", y <= x);

  printf("Greater Than (>) operator: \n ");
  printf("\t x > y : %d\n", x > y);
  printf("\t y > x : %d\n\n", y > x);

  printf("Greater Than Or Equal To (>=) operator: \n");
  printf("\t x >= y : %d\n", x >= y);
  printf("\t y >= x : %d\n\n", y >= x);

  printf(" Equal to (==) To operator: \n");
  printf("\t x == y: %d\n\n", y == x);
  printf("\t y == z: %d\n\n", y == x);

  printf("Not Equal To (!=) operator: \n");
  printf("\t x != y : %d\n\n", y != x);
  printf("\t y != z : %d\n\n", z != y);

  return 0;
}
