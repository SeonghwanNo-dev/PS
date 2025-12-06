#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <array>
using namespace std;


int main()
{   
    // 1. C++ 스트림과 C 스트림의 동기화 해제
    std::ios::sync_with_stdio(false); 
    // 2. cin과 cout의 묶음 해제
    std::cin.tie(NULL);

    int a;
    int b, c;

    cin >> a;

    for (int i=0; i<a; i++) 
    {
        cin >> b >> c;
        cout<< b+c << "\n";
    } 

    return 0;
}

