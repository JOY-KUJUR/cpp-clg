#include<stdio.h>

void main() {
  int i, j, k, day, dt = 1;
  printf("Enter Total Numbers of Days in a Month:");
  scanf("%d", & day);
  printf("\n\nEnter 0 for Monday:");
  printf("\nEnter 1 for Tuesday:");
  printf("\nEnter 2 for Wednesday:");
  printf("\nEnter 3 for Thursday:");
  printf("\nEnter 4 for Friday:");
  printf("\nEnter 5 for Saturday:");
  printf("\nEnter 6 for Sunday:");
  printf("\n\nChoose Between 0 to 5:");
  scanf("%d", & k);
  printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n\n");
  printf(" _________________________________________________\n\n");
  for (j = k; j > 0; j--) {
    printf("\t");
  }
  while (dt <= day) {
    if (k != 0) {
      if (k % 7 == 0)
        printf("\n");
    }
    printf("%d\t", dt);
    dt++;
    k++;
  }
}