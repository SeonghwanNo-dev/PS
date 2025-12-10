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
    getline(cin,s);

    if(s[s.size()-1]==' ') s.pop_back();
    if(s[0]==' ') s.erase(s.begin());

    if(s.size()==0) cout << 0;
    else {
        int c = 1;
        for(char s2:s)
        {
            if(s2==' ') c++;
        }
        cout<<c;
    }
    return 0;

}