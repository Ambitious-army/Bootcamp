#include<iostream>
using namespace std;
int main()
{
    float p, t, r, interest;

    cout << "Enter principal amount (inr):";
    cin >> p;

    cout << "Enter the time period (yrs):";
    cin >> t;

    cout << "Enter the rate of interest (%):";
    cin >> r;

    float i = (p * t * r) / 100;

    cout << "Interest = " << i << endl;

    return 0;
}