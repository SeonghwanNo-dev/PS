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
    int c, d;
    int sum = 0;

    cin >> a;
    cin >> b;

    for (int i=0; i<b; i++) 
    {
        cin >> c >> d;
        sum += (c*d);
    } 

    if (sum==a) cout<<"Yes";
    else cout<<"No";

    return 0;
}

