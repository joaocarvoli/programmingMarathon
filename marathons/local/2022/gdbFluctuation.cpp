#include <iostream>
using namespace std;

double gdp(double f1, double f2);

int main(){
    double f1, f2 = 0;
    cin >> f1 >> f2;
    printf("%.6f\n", gdp(f1, f2));
}

double gdp(double f1, double f2){
    double x = 100;
    x += (f1/100)*x;
    x += (f2/100)*x;
    return x - 100;
}



