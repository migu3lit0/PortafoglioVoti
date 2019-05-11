#include<iostream>
#include<algorithm>

using namespace std;


int main(){

    int n;

    cin >> n;

    int values[n];
    int max = 0;
    int min = 9999;

    for (size_t i = 0; i < n; i++){
        cin >> values[i];
        if(max < values[i]){
            max = values[i];
        }
        if(min > values[i]){
            min = values[i];
        }
    }

    if((max+min)%2 == 0){
        int number = (max + min) /2;
        int res = (max - min)/2;

        for (size_t i = 0; i < n; i++)
        {
            if(values[i] != number && (values[i] + res != number && values[i] - res != number)){
                cout << -1 << endl;
                return 0;
            }
        }

        cout << res << endl;

    }else{
        int res = max - min;
        for (size_t i = 0; i < n; i++)
        {
            if(values[i] != max && (values[i] + res != max)){
                cout << -1 << endl;
                return 0;
            }
        }

        cout << res << endl;
    }
    
    return 0;


}