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
    int c;

    cin>>a>>b>>c;

    if (a==b && b==c) cout<<10000+a*1000;
    else if (a==b || b==c) cout<<1000+b*100;
    else if (a==c) cout<<1000+a*100;
    else{
        vector<int> arr = {a, b, c};
        sort(arr.begin(), arr.end());
        cout<<arr[2]*100;
    }
    return 0;
}

