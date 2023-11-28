#include<stdio.h>
#include<math.h>
#include"utils.h"
int main(){
    int failed = 0;
    int passed = 0;
    double latitude = 50;
    double returnedValue = round(degreesToRadians(latitude));
    double result = 0.872665;
    if(returnedValue == 1){
     printf("PASSED\n");
     passed++;
    }
    else{
     printf("Failed: degreeToRadians returned %lf, Expected 0.872665\n",returnedValue);
     failed++;
   
    }
  printf("The number of test passed: %d\n",passed);
  printf("The number of test failed: %d\n",failed);
  printf("The percentage of test passed: %lf\n",100.0 * passed/(passed + failed));
  
}