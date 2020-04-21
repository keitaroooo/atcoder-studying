#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int sum = 0;
    for (int i = 0;i < N; i++)
    {
        if(i %2 == 0)
        {
            sum += a[i];
        }
        else
        {
            sum -= a[i];
        }
        
    }
    cout << sum << endl;
    return 0;
}
