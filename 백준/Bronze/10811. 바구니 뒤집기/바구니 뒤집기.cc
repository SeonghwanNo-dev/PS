#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{   
    int a, b;
    int d1, d2;
    int temp;

    cin>>a>>b;
    vector<int> v(a);
    for(int i=0; i<a; i++) v[i] = i+1;

    for (int i=0; i<b; i++)
    {   
        cin>>d1>>d2;
        for(int j=0; j<=(d2-d1)/2; j++)
        {
            temp = v[(d1+j)-1];
            v[d1+j-1] = v[d2-j-1];
            v[d2-j-1] = temp;
        }
    }

    for(auto ele:v) cout<<ele<<" ";
    return 0;
}