#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{   
    vector<int> a(28);
    vector<int> b(30);
    for (int i=0; i<28; i++) cin>>a[i];
    for (int i=0; i<30; i++) b[i] = i+1;
    sort(a.begin(), a.end());

    int a_index = 0;
    vector<int> c;
    for(int i=0; i<30; i++)
    {
        if (a[a_index]==b[i]) 
        {
            a_index++;
        }
        else
        {
            c.push_back(b[i]);
        }
    }

    cout<<c[0]<<"\n"<<c[1];

    return 0;
}