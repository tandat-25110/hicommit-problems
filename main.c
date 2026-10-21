#include <stdio.h>

int main() {
  int KHOANGCACH, GIATRI;
    scanf("%d %d", &KHOANGCACH, &GIATRI);
    if (KHOANGCACH <== 0 || GIATRI <== 0){
      printf("INVALID");
    }
   else if (GIATRI >=500000 && KHOANGCACH <==15){
     printf("0");
   }
  else if (KHOANGCACH >=1 && KHOANGCACH <==5){
     printf("1500");
   }
  else if (KHOANGCACH >=6 && KHOANGCACH <==15){
     printf("25000");
   }
  else // khoangcach > 15 km
    printf("40000"); 
   }
  return 0;
}