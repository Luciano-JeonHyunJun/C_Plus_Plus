#include <iostream>
using namespace std;

int main() {


    int a; // int라는 자료형의 a라는 변수를 선언
    a = 90; //a의 값은 90입니다. int자료형  값을 대입

    int b = 3; //한번에 대입과 선언을 하는것을 '초기화' 라고 말한다

/*
    a = 5; //변수 초기화
    b = 10;
*/
    cout<<"a = "<<a<<", b = "<<b<<endl;

    return 0;
}

/*
변수 : 변할수 있는 수
상수 : 변할수 없는수

-변수에서 신경써야하는것
1. 변수의 자료형
2. 변수의 이름
3. 변수의 메모리 영역 (컴파일러가 알아서 정함)

-변수의 규칙
1. 숫자로 시작할수 없다.
2. C++ 에서 사용하는 함수키워드로 불가능하다.
3.띄어쓰기는 불가능하니다(white space)

변수는 사용되기 이전에 정의되어야 한다.
ex): int a 로 선언한 변수보다 값을 대입하는게 위에 있는 경우


*/
