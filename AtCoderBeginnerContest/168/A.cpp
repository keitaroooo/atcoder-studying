#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    N %= 10;
    if(N == 3)
    {
        cout << "bon" << endl;
    }
    else if(N==0 || N==1 || N==6 || N==8)
    {
        cout << "pon" << endl;
    }
    else
    {
        cout << "hon" << endl;
    }
    

    return 0;
}