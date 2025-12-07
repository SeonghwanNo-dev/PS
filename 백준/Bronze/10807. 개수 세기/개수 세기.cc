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
    int counter = 0;

    for (int i=0; i<a; i++)
    {
        cin>>b[i];
    }
    cin >> c;

    for (int i: b)
    {
        if (i==c) counter ++;
    }
    cout<< counter;

    return 0;
}