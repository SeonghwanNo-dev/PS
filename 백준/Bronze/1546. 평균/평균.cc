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
    vector<float> v(a);
    for(int i=0; i<a; i++) cin >> v[i];
    sort(v.begin(), v.end());
    float Max = v[a-1];
    float sum = 0;
    for(int i=0; i<a; i++) sum+= ((float)v[i]/Max*100);
    cout<<(float)sum/a;

    return 0;
}