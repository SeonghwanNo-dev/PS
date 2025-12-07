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

    for (int i=0; i<a; i++)
    {
        cin>>b[i];
    }

    sort(b.begin(), b.end());

    cout<<b.front()<<" "<<b.back();

    return 0;
}