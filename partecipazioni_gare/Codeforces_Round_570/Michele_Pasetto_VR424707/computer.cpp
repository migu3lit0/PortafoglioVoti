#include <stdio.h>
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main(){
    int q;
    cin >> q;
    for (int i=0;i<q;i++){
        int k,n,a,b;
        cin >> k >> n >> a >> b;
        int diff=k - (b*n) ;
        int costo=a-b;
        if (diff<=0)
            cout << -1;
        else{
            int bonus= (diff-1)/costo;
            if (bonus>=n)
                cout << n;
            else
                cout << bonus;
        }
        cout << "\n";
        
    }
}
