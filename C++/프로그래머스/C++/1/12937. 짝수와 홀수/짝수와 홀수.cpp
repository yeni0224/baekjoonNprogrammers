#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int num) {
    string answer = "";
    if(num % 2 == 0){
        answer = "Even";
        cout << answer << endl;
    }
    else{
         answer = "Odd";
    }
    return answer;   
}