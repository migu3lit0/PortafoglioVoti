#include<iostream>
#include<algorithm>

using namespace std;


int main(){

    int values[4];
    int max = 0;

    for (size_t i = 0; i < 4; i++){
        cin >> values[i];
        if(max < values[i]){
            max = values[i];
        }
    }

    for (size_t i = 0; i < 4; i++){
        if(values[i] != max){
            cout << max - values[i] << " ";
        }
    }
    
    return 0;

}