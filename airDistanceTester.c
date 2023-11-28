#include<stdio.h>
#include"utils.h"
int main(){
    int failed = 0;
    int passed = 0;
    double latitude = 40;
    if(degreesToRadians(latitude)!=5){
    printf("Failed: degreeToRadians returned %lf, Expected 6\n",degreesToRadians(latitude));
    failed++;
  }
  else{
    printf("PASSED\n");
    passed++;
  }
}