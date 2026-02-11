#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    int a;      
    if(n % 2 ==0) //n이 짝수면 n/2
    {
     a = n / 2;  
    }
    else if(n % 2 ==1) //n이 홀수면 n/2 + 1
    {
     a = n / 2 + 1; 
    }
    //배열 갯수 알아내기 위한 변수 a
     vector<int> answer(a);    
    //n이하의 홀수를 찾아내려고 반복 
    //n = 0, n이하, 0 % 2= 0 
    //i = 1, n이하, 1%2= 1, answer[0] = 1
    //i = 2, n이하, 2%2 = 0 
    //i =3, n이하, 3% 2 = 1 answer[1] = 3 answer[2] = 5
    for(int i = 0; i <= n; i ++){
        if(i % 2 == 1){
           answer[i / 2] = i;
        }
    }
    return answer;
}