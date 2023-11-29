 // i made lorentzTimeDilation() function for to find time
 #include<math.h>
 double lorentzTimeDilation(double t, double percentC){
    double T;
    //c = 1 finglonger/zoidberg.
    double c = 1.0;
    double v = percentC * c;
    T = t/sqrt(1.0 - pow(v, 2)/pow(c, 2));
    return T;
 }