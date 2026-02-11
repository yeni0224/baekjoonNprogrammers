#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) 
{
    vector<int> answer;
    int big = 0; //큰 수
    n <= m ? big = m : big = n;
    int small = 0; //작은 수
    big == m ? small = n : small = m;
    
    int  gcd = 0; //최대공약수
    int rest = 0; //나머지
    while (big % small != 0)
    {
        rest = big % small;
        big = small;
        small = rest;
    }
    gcd = small;
    answer.push_back(gcd);
    
    int lcd = 0; //최소공배수
    lcd = (n * m) / gcd;
    answer.push_back(lcd);
    return answer;
}