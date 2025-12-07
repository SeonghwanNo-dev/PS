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
    cin >> a;
    
    vector<int> b(a);
    int c;
    cin >> c;

    for (int i=0; i<a; i++)
    {
        cin>>b[i];
    }

    for (int i: b)
    {
        if (i<c) cout<<i<<" ";
    }


    return 0;
}