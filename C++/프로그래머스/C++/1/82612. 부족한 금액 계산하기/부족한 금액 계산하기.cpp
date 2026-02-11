#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long temp = 0;
    for(int i = 0; i <= count; i++)
    {
       temp += i* price;
    }
    answer = temp - money;

    if(answer <= 0 ) answer = 0;
    else answer = abs(temp - money);
    return answer;
}