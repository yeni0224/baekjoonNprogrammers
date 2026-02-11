#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int n = num_list.size(); 
    
    for(int i = 0; i < n; i++){
        answer.push_back(num_list[n - i - 1]);
    }
    
    return answer;
}