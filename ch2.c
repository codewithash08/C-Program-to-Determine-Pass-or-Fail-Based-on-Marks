#include <stdio.h>

int main(){

  int Score = 300;
  float English, Maths, Science;
  printf("@if.elif.else_\n");
  printf("Enter Your English Marks: ");
  scanf("%f", &English);
  printf("Enter Your Maths Marks: ");
  scanf("%f", &Maths);
  printf("Enter Your Science Marks: ");
  scanf("%f", &Science);
  printf("\n");
  float Totalmarks = English + Maths + Science;
  float Totalper = (Totalmarks / Score) * 100;
  printf("Your Presentage is: %.2f%%\n", Totalper);

  if (Totalper >= 33){
    if (English >= 33){
      if (Maths <= 33){
        printf("Passed !!");
        printf("But You are Failed in maths");       
      }
      
      else if (English <= 33){
        printf("Passed !!\n");
        printf("But You are Failed in English");
      }
      else if (Science <= 33){
        printf("Passed !!\n");
        printf("But You are Failed in Science");
      }
    }
    else if (Maths >= 33){
      if (Maths <= 33){
        printf("Passed !!\n");
        printf("But You are Failed in maths");
      }
      else if (English <= 33){
        printf("Passed !!\n");
        printf("But You are Failed in English");
      }
      else if (Science <= 33){
        printf("Passed !!\n");
        printf("But You are Failed in Science");
      }
    }
    else if (Science >= 33){
      if (Maths <= 33){
        printf("Passed !!\n");
        printf("But You are Failed in maths");
      }
      else if (English <= 33){
        printf("Passed !!\n");
        printf("But You are Failed in English");
      }
      else if (Science <= 33){
        printf("Passed !!\n");
        printf("But You are Failed in Science #row");
      }
    }
  }
  else{
    printf("You Are Failed !!");
  }
























































  return 0;
}




