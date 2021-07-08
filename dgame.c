#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

  int num_1 = 0;
  int num_2 = 0;
 
  srand((unsigned)time(NULL));

  num_1 = rand() % 6 + 1;;
  num_2 = rand() % 6 + 1;;

  printf("Rolling the dice... \n");
  printf("Die 1: %d \n", num_1);
  printf("Die 2: %d \n", num_2);
  printf("Total value: %d \n", num_1+num_2);
 
}