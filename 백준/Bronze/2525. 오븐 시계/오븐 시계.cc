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
    int c;

    cin>>a>>b>>c;

    int temp;
    temp = b+c;
    if (temp/60 != 0){
        b = temp % 60;
        a += temp/60;
        if (a>=24) a -= 24;
    }
    else b = temp;

    cout<<a<<" "<<b;
    return 0;
}
