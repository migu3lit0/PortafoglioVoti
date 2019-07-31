#include <stdio.h>
#include <cstdio>
#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        long int n;
        cin >>n;
        int planks[n]={};
        for (int j=0;j<n;j++){
            int asse;
            cin >>asse;
            planks[j]=asse;
        }
        sort(planks, planks+n, greater<int>());
        int scala1=planks[0];
        int scala2=planks[1];
        if (scala2<=1 or n<=2){
            cout << "0\n";
            continue;
        }
        int ngradini=0;
        for (int j=2;j<n;j++){
            if (planks[j]>=1){
                ngradini++;
            }
        }
        if (ngradini >= scala2){
            cout << scala2-1 << "\n";
        }
        else {
            cout << ngradini << "\n";
            
        }
    }
}
