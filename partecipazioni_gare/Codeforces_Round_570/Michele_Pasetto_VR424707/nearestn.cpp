#include <stdio.h>
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

bool valido(int number){
    int sum=0;
    while (number) {
        sum += number%10;
        number /= 10;
    }
    return (sum % 4==0) ;
}

int main(){
    int n;
    cin >> n;
    while(!valido(n)){
        n++;
    }
    cout << n;
    
}
