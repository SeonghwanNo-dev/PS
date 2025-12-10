#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    string s1, s2, s3, s4;
    int s5, s6;
    cin>>s1 >> s2;
    for(int i=0; i<3; i++)
    {
        s3.push_back(s1[2-i]);
        s4.push_back(s2[2-i]);
    }

    s5 = stoi(s3);
    s6 = stoi(s4);

    if(s5>s6) cout<<s5;
    else cout<<s6;

    return 0;

}