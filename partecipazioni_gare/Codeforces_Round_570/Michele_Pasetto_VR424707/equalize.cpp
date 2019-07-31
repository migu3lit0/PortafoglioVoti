#include <stdio.h>
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main(){
    int q;
    cin >> q;
    for (int i=0;i<q;i++){
        int n,k;
        cin >>n >>k;
        int min;
        int max=0;
        for (int j=0;j<n;j++){
            int prezzo;
            cin >>prezzo;
            if (j==0)
                min=prezzo;
            if (prezzo>max)
                max=prezzo;
            if (prezzo< min)
                min=prezzo;
        }
        if ((max-min) > 2*k){
            cout << -1;
        }
        else
            cout << min+k;
        cout << "\n";
        
    }
}
