#include <stdio.h>
#include <stdlib.h>

int main()
{
  const char CHARACTERNAME[] = "John";
  int characterAge = 20;
  double gpa = 3.4;
  printf("Hello world\n");
  /*
  testing
  */
  printf("%s is %d years old and got a %f\n",CHARACTERNAME,characterAge,gpa);
  char grade;
  char phrase[20];
  printf("Enter your favorite phrase: ");
  fgets(phrase,20,stdin);
  printf("%s",phrase);
  return 0;
}