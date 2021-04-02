//프로그램을 하나 만든다고 가정
//원의 넓이를 구하는 프로그램
//반지름 * 반지름 * 파이

#include <iostream>
using namespace std;

int main() {

    const float PIE = 3.1415926535;


    int r = 3;
    float s = r * r * 3.14;

    cout<<s<<endl;

// 만약 다른 반지름 길이라면 또 변수를 초기화 시켜야하는데

    int a = 3.1415926535;

    cout<<a<<endl; //int형이라서 소수점 생략

    //강제적 데이터형 변환

    char ch = 'M';
    cout<<(int)ch<<" "<< int(ch)<<" "<<endl; //아스키코드에선 M은 77
    cout<<static_cast<int>(ch) <<endl;




    return 0;
}

/*
3.141592 등등 파이같은
- 바뀔수 없는 수
- 바뀌어서는 안되는 수

= 상수

const라는 제한자를 사용
const (변수형) [상수명] = (값)

-중간에 값을 바꾸게 되면 에러가 뜸

//데이터형 변환
1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을때
2. 수식에 데이터형을 혼합하여 사용했을때
3. 함수에 매개변수를 전달할때

*강제적 데이터형 변환
typeName(a) or (typeName)a 
c++에서는 조금 더 제한적인 데이터형 변환자가 있음
static_cast<typeName>(변수명)


*/