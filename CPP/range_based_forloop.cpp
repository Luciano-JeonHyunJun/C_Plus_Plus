#include <iostream>
#include <string>

using namespace std;

int main()
{

	string str {"Hello!"};  //변수 생성
	for (char c : str)
	{

		cout << "[" << c << "]"; //변수 C 를 감싸는데 c 는 Hello 라는 string
	}
	cout << '\n';
	
	
}

//이 루프는 자동이며 카운터 변수를 명시 적으로 선언 할 필요가 없습니다.
