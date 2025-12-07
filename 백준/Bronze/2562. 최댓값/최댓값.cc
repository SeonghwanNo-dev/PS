#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{   
    int a = 9;

    int temp = 0;
    int max = 0;
    int max_count = 0;


    for (int i=0; i<a; i++)
    {   
        cin >> temp;
        if (max<temp)
        {
            max = temp;
            max_count = (i+1);
        }
    }

    cout<<max<<"\n"<<max_count;
    return 0;
}