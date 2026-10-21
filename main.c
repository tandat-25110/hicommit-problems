#include <stdio.h>

int main() {
  int t;
  if (scanf("%d", &t) == 1){
    if (t < 15){
      printf("LANH");
    } else if (t < 25) {
      printf("MAT\n");
    } else if (t < 35){
      printf("NONG");
    } else {
      printf("RAT_NONG");
  }
  return 0;
}