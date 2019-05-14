#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    int n;

    cin >> n;

    vector<uint64_t> listaProblemi;

    for (size_t i = 0; i < n; i++){
        uint64_t problema;
        cin >> problema;
        listaProblemi.push_back(problema);
    }

    sort(listaProblemi.begin(), listaProblemi.end());

    uint64_t counter = 0;
    uint64_t number = 1;

    for (size_t i = 0; i < n; i++){
        if(listaProblemi.at(i) >= number){
            number++;
            counter++;
        }
    }
    
    cout << counter;

    return 0;
    

}