#include <stdio.h>
int main() {
  float dtb;
  float drl; 
  int hl = 0; 
  int rl = 0;
  
   scanf ("%f %f", &dtb, &drl );
  
  if (dtb>=9.0) hl = 4;
  else if (dtb >= 80) hl = 3;
  else if (dtb >= 70) hl = 2;
  else hl = 1;
 
  if (drl >=90) rl = 4;
  else if (drl >= 80) rl = 3;
  else if (drl >= 70) rl = 2;
  else rl = 1;  
  
 if (hl == 1 || rl == 1) {
    printf("KHONG_DAT\n");
}
 else if (hl == 4 && rl == 4){
  printf("HOC_BONG_XUAT_SAC\n");
} 
 else if ((hl == 3 && (rl == 3 || rl == 4)) || (hl == 4 && rl == 3)) {
  printf("HOC_BONG_GIOI\n");
} 
 else if ((hl == 2 && rl >= 2) || (hl == 3 && rl == 2) || (hl == 4 && rl == 2)) {
  printf("HOC_BONG_KHA\n");
}
 else{
  printf("KHONG_DAT\n");                     
 }

  return 0;
}