#include<iostream>
#include<vector>
#include<string>


using namespace std;

int main(){

    uint64_t n;

    cin >> n;

    string parola;

    cin >> parola;

    uint64_t count_remove = 0;
    string result;

    for (size_t i = 0; i < n; i++){
        if(i == n-1){
            count_remove++;
            break;
        }
        if(parola.at(i) != parola.at(i+1)){
            result.push_back(parola.at(i));
            result.push_back(parola.at(i+1));
            i++;
        }else{
            count_remove++;
        }
    }

    
    cout << count_remove << endl << result << endl;
    

    



    return 0;

}