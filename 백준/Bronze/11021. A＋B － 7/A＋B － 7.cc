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
    int b, c;

    cin >> a;

    for (int i=1; i<=a; i++) 
    {
        cin >> b >> c;
        cout<< "Case #"<< i << ": " << b+c << "\n";
    } 

    return 0;
}

