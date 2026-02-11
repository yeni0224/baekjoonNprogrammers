#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(2);

    //갯수 세기
  for(int i = 0; i < num_list.size(); i++) {
    if(num_list[i] % 2 == 0){
        answer[0]++;
        }
    else if(num_list[i] % 2 == 1){
        answer[1]++;
    } 
  }   
    return answer;
}