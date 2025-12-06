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
    int sum = 0;

    cin >> a;

    for (int i=1; i<=a; i++) 
    {
        sum+=i;
    } 

    cout<<sum;
    return 0;
}

