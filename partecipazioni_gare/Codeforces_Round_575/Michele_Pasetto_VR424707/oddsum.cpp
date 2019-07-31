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
        int n,k;
        cin >>n >>k;
        long long int sum=0;
        int inte =0;
        std::stringstream buffer;
        buffer.str("");
        for (int j=1;j<=n;j++){
            int x;
            cin >>x;
            sum +=x;
            if (sum%2 == 1 and inte < k-1 and j<n){
                buffer << j << " ";
                inte++;
                sum=0;
            }
            if (j==n){
                if (sum%2==1 and inte == k-1){
                    cout<<"YES\n";
                    buffer << j;
                    cout << buffer.str() <<"\n";
                }
                else {
                    cout<<"NO\n";
                }
            }
        }
    }
}
