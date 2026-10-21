#include <stdio.h>

int main() {
  int a, b, c, solon;
  scanf("%d %d", &a, &b, &c);
  if (a>b){
    solon = a;
  } else {
    solon = b;
  }
  if (solon > c){
    printf("%d", solon);
  } else {
    printf("%d", c);
  }
  return 0;
}