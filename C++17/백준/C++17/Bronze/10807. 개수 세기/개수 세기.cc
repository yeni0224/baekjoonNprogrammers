#include <iostream>

//개수 세기

int main()
{
    //입력할 정수 갯수
    int N;
    //입력할 정수
    int num;
    //찾으려는 정수
    int v;
    //찾으려는 정수의 갯수
    int count = 0;
    //정수 들어가는 배열
    int arrNum[201] = { 0, };

    //찾으려는 정수 갯수 입력
    std::cin >> N;
    //정수 입력
    for (int i = 0; i < N; i++)
    {
        std::cin >> num;
        arrNum[num + 100]++;
    }

    //찾을 정수 입력
    std::cin >> v;
    std::cout << arrNum[v + 100] << std::endl;

    return 0;
}