#include <string>
#include <algorithm> // remove 사용

using namespace std;

string solution(string my_string, string letter) {
    my_string.erase(remove(my_string.begin(), my_string.end(), letter[0]), my_string.end());
    
    return my_string;
}