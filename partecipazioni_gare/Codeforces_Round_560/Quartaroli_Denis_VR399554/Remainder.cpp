#include<iostream>
#include<string>

using namespace std;

int main(){

    uint64_t n, x, y;

    cin >> n >> x >> y;

    string number;

    cin >> number;


    uint64_t counter = 0;

    for (size_t i = n-x; i < n; i++){
        if(i != n-y-1 && number.at(i) == '1'){
            counter++;
        }else if(i == n-y-1 && number.at(i) == '0'){
            counter++;
        }
    }

    cout << counter << endl;


    return 0;

}