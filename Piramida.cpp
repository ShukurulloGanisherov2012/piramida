#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    string k = "*";
    for(int i=1;i<=N;i++){
        cout << k << "\n";
        k = k+"*";
    }
}
