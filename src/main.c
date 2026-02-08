# include <stdio.h>

int main () {
  /* Source */
  char name[] = "Muhammad Irwan Asikin";
  char title[] = "Bachelor of Animal Husbandry";
  float ipk = 3.61;
  int year = 2025;
  
  /* Build */
  printf("Name          : %s\n", name);
  printf("Title         : %s\n", title);
  printf("GPA           : %.2f\n", ipk);
  printf("Year Graduate : %d\n", year);
  return 0;
}
