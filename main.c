#include <stdio.h>

int main(int argc, char const *argv[]) {
  char name[] = "Zahar";
  int age = 400;
  int year = 661;
  int sum = age+year;
  char bai[]="Hello";
  char fy[]="through";
  int fu = 5;
  int fj = 8;
  int sum2 = fu+fj;
  char ng[]="iu";

  printf("%s: %s\n", bai, name);
  printf("Мне %d лет\n",age );
  printf("Через %d год мне будет %d год \n",year, sum
  );
  printf("%s\n", fy);
  printf("а Через 5 лет мне будет %d лет\n",fu+fj );
  return 0;
}
