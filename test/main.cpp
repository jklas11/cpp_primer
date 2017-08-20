#include <iostream>
using namespace::std;
double multiply(double,double);


int main() {

    double firstnumber{0};
    double secondnumber{0};

    cout << "this programm multiplies 2 numbers\n";

    cout << "enter first number" << endl;
    cin >> firstnumber;

    cout << "enter second number" << endl;
    cin >> secondnumber;

    cout << "result: " << multiply(firstnumber,secondnumber) << endl;

    return 0;
}

double multiply(double a, double b) {

    double result = a*b;

    return result;
}
