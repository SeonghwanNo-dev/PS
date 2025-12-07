#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{   
    int a;
    int b;

    cin>>a>>b;
    vector<int> c(a);
    int d1, d2, d3;
    for (int i=0; i<b; i++)
    {
        cin>>d1>>d2>>d3;
        for (int j = d1; j<=d2; j++)
        {
            c[j-1] = d3;
        }
    }
    for (auto ele: c) cout << ele <<" ";
    return 0;
}