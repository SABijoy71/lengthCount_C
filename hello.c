#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

  char country1[50];
  printf("Enter any country name: ");
  fflush(stdout);
  gets(country1);

  int i;
  int length = 0;
  for(i = 0; country1[i] != '\0';i++){
    length++;
  }

  printf("%d\n", length);

  return 0;
}