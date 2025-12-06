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

    cin >> a;

    for (int i=0; i<a; i++) 
    {
        cin >> b >> c;
        cout << b+c<< endl;
    } 

    return 0;
}

