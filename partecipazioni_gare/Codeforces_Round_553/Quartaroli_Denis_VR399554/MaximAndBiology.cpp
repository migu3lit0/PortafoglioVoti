#include<iostream>

using namespace std;


int main(){

    int n;

    cin >> n;

    char values[n];

    for (size_t i = 0; i < n; i++){
        cin >> values[i];
    }

    int min = 99999;
    int tmpmin = 0;

    for (size_t i = 0; i < n-3; i++)
    {
        int minA = std::min(abs(values[i] - 'A'), ('A' - values[i]) + ('Z' - 'A' + 1));
        int minB = std::min(abs(values[i+1] - 'C'), ('C' - values[i+1]) + ('Z' - 'C' + 1));
        int minC = std::min(abs(values[i+2] - 'T'), ('T' - values[i+2]) + ('Z' - 'T' + 1));
        int minD = std::min(abs(values[i+3] - 'G'), ('G' - values[i+3]) + ('Z' - 'G' + 1));
        tmpmin = minA + minB + minC + minD;
        if(tmpmin < min){
            min = tmpmin;
        }
    }
    
    cout << min;
    
    return 0;

}
