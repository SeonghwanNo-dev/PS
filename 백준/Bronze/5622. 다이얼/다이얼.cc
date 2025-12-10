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
    int a;
    int c=0;
    cin>>s1;
    for(int i=0;i<s1.size();i++)
    {
        a = s1[i]-'A';
        if(a <= 17) {a /=3; a+=3;}
        else {
            switch (a)
            {
            case 18:
                a = 8;
                break;
            case 19:
                a = 9;
                break;
            case 20:
                a = 9;
                break;
            case 21:
                a = 9;
                break;
            case 22:
                a = 10;
                break;    
            case 23:
                a = 10;
                break;                    
            case 24:
                a = 10;
                break;    
            case 25:
                a = 10;
                break;                    
                
            default:
                break;
            }

        }
        
        c+=a;
    }
    cout<<c;

    return 0;
}
