#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a;

    for(int i =(int)'a'; i<=(int)'z'; i++)
    {
        a = s.find((char) i);
        if (0<=a && a<s.size()) cout<<a<<" ";
        else cout<<-1<< " ";
    }

    return 0;
}