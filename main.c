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
  if (drl >=90){
    phanloaidrl = 4;
  }else if (drl >= 80){
    phanloaidrl = 3;
  }else if (drl >= 70){
    phanloaidrl = 2;
  }else
    phanloaidrl = 1;
  }
if (phanloaihocbong == 1 || phanloaidrl == 1){
  printf("KHONG_DAT\n");
}else if (phanloaihocluc == 4 && phanloaidrl == 4){
  printf ("HOC_BONG_XUAT_SAC\N");
}else if ((phanloaihocluc == 3 && phanloaidrl == 3 || phanloaidrl == 4)) ||
         (phanloaihocluc == 4 && phanloaidrl == 3) 
  printf ("HOC_BONG_GIOI\N");
}else if (phanloaihocluc == 2 && phanloaidrl >= 2) ||
        (phanloaihocluc == 3 && phanloaidrl == 2) ||
        (phanloaihocluc == 4 && phanloaidrl >= 2) || {
  printf ("HOC_BONG_KHA\N");  
} else{
  printf ("KHONG_DAT\N");                     

  return 0;
}