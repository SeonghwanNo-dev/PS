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

    while (1)
    {
        cin >> a >> b;
        if (a==b && a==0) break;
        cout<< a+b << "\n";
    } 

    return 0;
}

