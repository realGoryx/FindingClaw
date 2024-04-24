#include <iostream>
#include <vector>

using namespace std;

int function(vector<vector<int>>& arr) {
  int  n = arr.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            for (int k = 0; k < n; ++k) {
                if (i == k || j == k) continue;
                for (int l = 0; l < n; ++l) {
                    if (i == l || j == l || k == l) continue;
                    if (arr[i][j] == 0 && arr[k][i] != 0 && arr[k][j] != 0 && arr[k][l] != 0 && arr[i][l] == 0 &&
                        arr[j][l] == 0) {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

int main(){
    int howMany;
    cin >> howMany;

    for(int p = 0;  p < howMany; ++p){

        int numberVertices;
        cin >> numberVertices;

        vector<vector<int>> arr(numberVertices, vector<int>(numberVertices));

        for (int q = 0 ; q < numberVertices ; q++){
            for (int j = 0 ; j < numberVertices ; j++){
                char etwas;
                cin >> etwas;

                arr[q][j]= etwas- '0';
            }
        }
        cout << function(arr) << "\n";
    }

    return 0 ;
}