/**
리터럴: 리터럴이란 가장 명백한 종류의 상수입니다.

a = 5; 이 코드에서는 리터럴 상수였습니다.
리터럴 상수에는 6가지로 분류가 가능합니다.
1. 정수
2. 부동 소수점
3. 문자
4. 문자열
5. 부울
6. 포인터
등등 정의 리터럴로 분류가 가능합니다.

1. 정수 숫자 : 1776 , 707 , -273
2. 부동 소수점 : 3.141592 , 6.02e23 , 1.6e-19,3.0
3. 문자 및 문자열 리터럴 : 'z' 'p' "HelloWorld", "How do you do?"

이스케이프 코드	기술
\n	개행
\r	캐리지 리턴
\t	탭
\v	수직 탭
\b	역행 키이
\f	양식 피드 (페이지 피드)
\a	경고 (신호음)
\'	작은 따옴표 ( ')
\"	큰 따옴표 ( ")
\?	물음표 ( ?)
\\	백 슬래시 ( \)

기타 리터럴  : bool foo = true; / bool bar = false; / int * p = nullptr;

**/

#include <iostream>
using namespace std;

/**
const double pi = 3.14159;
const char newline = '\n';
**/

#define PI 3.14159
#define NEWLINE '\n'

int main() 
{ 
    /** 형식화 된 상수 표현식
    double r = 5.0;
    double circle;

    circle = 2 * pi * r;
    
    cout << circle;
    cout<< newline;

    return 0;
    **/

    double r = 5.0;
    double circle;

    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;

    return 0;
}
