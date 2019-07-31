#include <stdio.h>
#include <cstdio>
#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    for (int i=0;i<q;i++){
        long long int a, b, c;
        cin >> a >> b >> c;
        cout << (a+b+c)/2<<"\n";
    }
}
