#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{   
    int A;
    int B;
    cin>>A>>B;
    int B_2[3] = {B/100, (B%100)/10, B%10};
    int B_3[3] = {A*B_2[0], A*B_2[1], A*B_2[2]};


    cout<<B_3[2]<<endl<<B_3[1]<<endl<<B_3[0]<<endl<<B_3[2]+B_3[1]*10+B_3[0]*100;

    return 0;
}