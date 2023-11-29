// Author Maaz Khan
// The Program used for to test the different function of different source file 
#include<stdio.h>
#include<math.h>
#include"utils.h"
int main(){
    int failed = 0;
    int passed = 0;
    // test cases for the function degree to radians 
    double latitude = 50.0; // take argument with 50 
    double returnedValue = round(degreesToRadians(latitude)); // the argument latitude value copy to the function parameter
    if(returnedValue == 1){
     printf("PASSED\n"); // test passed
     passed++;
    }
    else{
     printf("Failed: degreeToRadians returned %lf, Expected 3\n",returnedValue);
     failed++; // test failed
   
    }
    // same for other 2 test case just change value
    latitude = 150.0;
    returnedValue = round(degreesToRadians(latitude));
    if(returnedValue == 3){
     printf("PASSED\n");
     passed++;
    }
    else{
     printf("Failed: degreeToRadians returned %lf, Expected 1\n",returnedValue);
     failed++;
   
    }
    int longitude = 96.0;
    returnedValue = round(degreesToRadians(longitude));
    if(returnedValue == 2){
     printf("PASSED\n");
     passed++;
    }
    else{
     printf("Failed: degreeToRadians returned %lf, Expected 1\n",returnedValue);
     failed++;
   
    }
    // test case use for to test the result of the getAirDistance function
    // we assign solid value to a variable and copy these value to getAirDistance function
    double originLatitude = 40.0, originLongitude = -85.0, destinationLatitude = 42.0, destinationLongitude = -96.0;
    printf("getAirDistance(%lf,%lf,%lf,%lf): ",originLatitude,originLongitude,destinationLatitude,destinationLongitude);
    // return distance value according him we find that the value is wrong or not
    returnedValue =round(getAirDistance(originLatitude,originLongitude,destinationLatitude,destinationLongitude));
    if(returnedValue == 949.0){
     printf("PASSED\n");
     passed++;
    }
    else{
     printf("Failed: degreeToRadians returned %lf, Expected 949.0\n",returnedValue);
     failed++;
   
    }
    // just i change the value except all same
    originLatitude = -40.0, originLongitude = 85.0, destinationLatitude = -45.0, destinationLongitude = 96.0;
    printf("getAirDistance(%lf,%lf,%lf,%lf): ",originLatitude,originLongitude,destinationLatitude,destinationLongitude);
    returnedValue =round(getAirDistance(originLatitude,originLongitude,destinationLatitude,destinationLongitude));
    if(returnedValue == 1058.0){
     printf("PASSED\n");
     passed++;
    }
    else{
     printf("Failed: degreeToRadians returned %lf, Expected 1058.0\n",returnedValue);
     failed++;
   
    }
    originLatitude = 85.0, originLongitude = -50.0 , destinationLatitude = 96.0, destinationLongitude = -63.0;
    printf("getAirDistance(%lf,%lf,%lf,%lf): ",originLatitude,originLongitude,destinationLatitude,destinationLongitude);
    returnedValue =round(getAirDistance(originLatitude,originLongitude,destinationLatitude,destinationLongitude));
    if(returnedValue == 1215.0){
     printf("PASSED\n");
     passed++;
    }
    else{
     printf("Failed: degreeToRadians returned %lf, Expected 1215.0\n",returnedValue);
     failed++;
   
    }
    // print the passed and failed also give the percentage of passed function

    printf("The number of test passed: %d\n",passed);
    printf("The number of test failed: %d\n",failed);
    printf("The percentage of test passed: %lf\n",100.0 * passed/(passed + failed));
  
}