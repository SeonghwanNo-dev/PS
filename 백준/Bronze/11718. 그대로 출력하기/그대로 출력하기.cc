#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    string s1;
    while(1)
    {
        if(getline(cin, s1)) cout<<s1<<"\n";
        else return 0;
    }

}