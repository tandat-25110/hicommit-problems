#include <stdio.h>
int main() {
  float dtb;
  int drl; 
  int phanloaihocluc = 0; 
  int phanloaidrl = 0;
  
   scanf ("%f %d", &dtb, &drl );
  
  if (dtb>=9.0){
     phanloaihocluc = 4;
  } else if (dtb >=8.0) {
    phanloaihocluc = 3;
  } else if (dtb >=7.0) {
    phanloaihocluc = 2;
  } else {
    phanloaihocluc = 1;
 }
  return 0;
}