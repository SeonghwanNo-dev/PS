#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <array>
using namespace std;


int main()
{   
    int a;
    int b;
    int offset;

    cin>>a>>b;
    offset = b-45;
    if (offset < 0) {
        b = 60 + offset;
        a -= 1;
        if (a==-1) a = 23;
    }
    else b = offset;

    // if (a == 0) cout<<b;
    // else{
    //     cout<<a;
    //     if (b!=0) cout<<" "<<b;
    // }
    cout<<a<<" "<<b;
}
