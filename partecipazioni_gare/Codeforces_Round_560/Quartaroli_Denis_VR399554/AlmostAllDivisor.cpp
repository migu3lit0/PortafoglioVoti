#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    int t, n;

    cin >> t;

    for (size_t i = 0; i < t; i++){
        cin >> n;
        vector<int> query;
        for (size_t j = 0; j < n; j++){
            int num;
            cin >> num;
            query.push_back(num);
        }

        sort(query.begin(), query.end());

        int mindiv;
        bool found = true;

        if(n == 1)
            cout << query.at(0) * 2;
        else{

            for (size_t j = 0; j < n-1; j++)
            {
                
                mindiv = query.at(n-1) * query.at(j);
                for (size_t k = 0; k < n; k++)
                {
                    if(mindiv%query.at(k) != 0){
                        cout << -1 << endl;
                        found = false;
                        break;
                    }
                }

                if(!found){
                    break;
                }
                
            }
            if(found){
                cout << mindiv << endl;
            }
        }
        
        

    }
    

    return 0;
}