#include <iostream>
using namespace std;

int main(){
    int d[100][100], r[100], c[100], n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n-1; ++j){
            cin >> d[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        r[i] = c[i] = 0;
        for(int j = 0; j < n-1; ++j){
            r[i] = d[i][j];
            c[i] = d[i][j-1];
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        cout << r[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << c[i] << " ";
    }
    return 0;
}
