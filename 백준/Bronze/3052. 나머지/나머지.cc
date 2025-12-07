#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{   
    vector<int> a;
    int temp;
    int count = 1;

    for (int i=0;i<10;i++)
    {
        cin>>temp;
        a.push_back(temp%42);
    }
    sort(a.begin(), a.end());
    temp = a[0];
    for(int i=0; i<10; i++)
    {
        if (a[i] == temp)
        {
            continue;
        }   
        else{
            temp = a[i];
            count++;
        }
    }

    cout<<count;

    return 0;
}