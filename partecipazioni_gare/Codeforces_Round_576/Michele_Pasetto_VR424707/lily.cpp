#include <stdio.h>
#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int h,l;
    cin >> h >> l;
    long double res= (long double)((l*l)-(h*h))/(long double)(2*h);
    cout << fixed<< setprecision(15)<< res ;
}
