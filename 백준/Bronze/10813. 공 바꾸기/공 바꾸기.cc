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
    for (int i = 0; i<a; i++) c[i] = (i+1);

    int d1, d2;
    int temp;
    for (int i=0; i<b; i++)
    {
        cin>>d1>>d2;

        temp = c[d1-1];
        c[d1-1] = c[d2-1];
        c[d2-1] = temp;
    }
    for (auto ele: c) cout << ele <<" ";
    return 0;
}