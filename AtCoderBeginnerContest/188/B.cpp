#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for(int i = 0; i < N; ++i) {
        cin >> B[i];
    }
    int sum = 0;
    for(int i = 0; i < N; ++i) {
        sum += A[i] * B[i];
    }
    if(sum == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}