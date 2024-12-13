#include <stdio.h>

int main () {
  printf("Hellow World!\n\n");
  printf("I am learning C.\nAnd it is awesome\n");
  printf("This is a backslash\\\n");
  printf("Here are some \"quotes\"\n");
  printf("And some random horizontal tab\t");
  //This is a comment
  /*This is a
  multi line
  comment*/
  int instNum = 42;
  int lateNum;

  lateNum = 42;
  float myFloat = 23.32;
  char myChar = 'b'; //needs single quotes

  printf("The number of the universe is %d\n", instNum);
  printf("%f\n", myFloat);
  printf("%c\n", myChar);
  printf("%d\n", lateNum);
  printf("I am %c sorry Chafique", 'v');
  return 0;
}
