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
    string c;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin>>b>>c;
        for(int j =0; j<c.size();j++)
        {
            for(int k=0;k<b;k++) cout<<c[j];
        }
        cout<<"\n";
    }

    return 0;
}