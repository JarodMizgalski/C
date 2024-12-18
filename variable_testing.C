#include <stdio.h>

int main () {
  int myNum = 15;
  myNum = 10;

  int firstInt = 10;
  int otherInt = 15;

  firstInt = otherInt;
  printf("%d\n", firstInt);

  int x = 5;
  int y = 6;
  int sum = x + y;
  printf("%d\n", sum);

  int a = 5, b = 6, z = 20;
  printf("%d\n", a + b + z);

  int t, s, d;
  t = s = d = 50;
  printf("%d\n", t + s + d);

  int length = 5;
  int width = 4;
  int area;

  area = length * width;

  printf("Length is: %d\n", length);
  printf("Width is: %d\n", width);
  printf("Area of the rectangle is: %d\n", area);

  char f = 70, g = 71, h = 72;
  printf("%c\n", f);
  printf("%c\n", g);
  printf("%c\n", h);

  char myText[] = "Hello";
  printf("%s\n", myText);

  float testNum = 7.75;
  printf("%f\n", testNum);

  float f1 = 35e3;
  double d1 = 12e4;

  printf("%f\n", f1);
  printf("%lf\n", d1);

  float testFloat = 4.29;
  printf("%.f\n", testFloat);//rounds up/down, but be aware it takes your memory
  printf("%.2f\n", testFloat);
  printf("%.1f\n", testFloat);//also rounds up/down

  printf("%lu\n", sizeof(testFloat));
  printf("%lu\n", sizeof(f1));
  printf("%lu\n", sizeof(t));
  printf("%lu\n", sizeof(d1));

  int items = 30;
  float cost_per_item = 7.50;
  float total_cost = items * cost_per_item;
  char currency = '$';

  printf("Number of items: %d\n", items);
  printf("Cost per item: %c%.2f\n", currency, cost_per_item);
  printf("Total cost: %c%.2f\n", currency, total_cost);

  float div = (float) 5/2;
  printf("%.1f\n", div);

  int maxNumber = 500;
  int userNumber = 243;
  float percentage = (float) userNumber/maxNumber * 100.0;

  printf("User's percentage is %.2f\n", percentage);

  const int BIRTHYEAR = 1955;//must be assigned a value and good to have all uppercase
  return 0;
}
