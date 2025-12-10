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
    string s1;
    for (int i=0; i<a; i++)
    {
        cin >> s1;
        cout<<s1[0]<<s1[s1.size()-1]<<"\n";
    }
    return 0;
}