#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string num = to_string(n);
    sort(num.begin(), num.end());
    reverse(num.begin(), num.end());
    answer = stoll(num);
    return answer;
}