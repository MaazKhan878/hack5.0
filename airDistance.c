#include<math.h>
#include"utils.h"
double getAirDistance(double originLatitude,double originLongitude,
                      double destinationLatitude,double destinationLongitude){
    originLatitude = degreesToRadians(originLatitude);
    originLongitude = degreesToRadians(originLongitude);
    destinationLatitude = degreesToRadians(destinationLatitude);
    destinationLongitude = degreesToRadians(destinationLongitude);
    double delta = destinationLongitude - originLongitude;
    float const R = 6371;
    double distance = acos(sin(originLatitude) * sin(destinationLatitude) + cos(originLatitude) * cos(destinationLatitude) *cos(delta)) * R;
    return distance;
}