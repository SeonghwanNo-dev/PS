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
    int b;

    while(1)
    {
        if (cin >> a >> b) cout<< a+b << "\n";
        else break;
    }
    return 0;
}

/*
이 문제의 키 포인트는 입력을 몇 개를 입력받는지 알 수 없다는 것이다.
이렇게 주어진 입력 파일만 갖고 입력을 받을 때 더이상 읽을 수 있는 데이터가 없는 경우 이를 EOF(End Of File) 이라고 한다.
(cin >> a >> b) 의 결과는 스트림 객체(cin)이며, eof일 땐 false를 반환한다.
*/