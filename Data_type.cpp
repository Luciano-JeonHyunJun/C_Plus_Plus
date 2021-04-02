#include <iostream>
#include <climits>
using namespace std;

int main() {

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;
    
	cout << "short은 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;
    
	cout << "long은 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;
    
	cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;
    
	return 0;
}


/*
정수형 : 소수부가 없는 수
음의 정수, 0 , 양의 정수

short,int,long,long long
모두 음의정수 , 0 , 양의정수를 저장할수 있는 정수형 데이터형

4개나 존재하는 이유
- 상황에 맞게 사용하기 위해서

-크기 (외우기보다는 climits라는 함수를 추천)
short<int<long<long long

자료형 앞에 'unsigned' 라는것을 쓴다면 데이터형의 최대값을 늘릴수 있다.
-음의값을 저장할 필요가 없다는거로 해석함
-> int로 가정하면 음의 정수까지 지원을하는데 그걸 양의 정수와 더해서
최대값이 늘어난것이다.


//실수형 : 소수부가 있는수 
ex): float 예를 들면 float = 3.14; , int = 3.14; 을 실행시키면 
float는 3.14그대로 출력이지만 int는 단지 3만 출력이 된다.
*/

