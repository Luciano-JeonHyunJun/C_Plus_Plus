#include <iostream>
// iostream이라는 헤더파일을 include하고 있음

int main() { // main 함수가 정의하는 부분 가장 먼저 실행되는 함수
std::cout << "HelloWorld" << std::endl; 
return 0;                               
}

/**
/ iostream 헤더파일은 C++에서 표출 입출력에 필요한 것들을 포함하고 있음
예를 들자면 1. std::cout , 2.std:: endl 을 예로 둘수 있음
C언어에서의 stdio.h와 비슷하다고 보면 됨 
C언어와 다른점은 파일 이름 뒤에 .h가 안붙음

---코드해석---
std::cout: 화면에 무언가를 출력시켜주는 것 같음 C언어의 printf와 다르게
사용된 것을 보니 함수 같지는 않음 

std::endl : 한줄 엔터를 쳐서 나타내라는 표시 같음

return 0; : 마찬가지로 main함수에서도 return을 해주고요

**/

/** 이름공간 (namespace)
cout 앞에 붙어있는 std의 정체는 C++의 표준 라이브러리의 모든 함수
객체 등이 정의된 이름 공간(namespace)입니다.
예를들어보자면 이름공간은 어떤 정의된 객체에 대해 어디 소속인지 지정해주는 것과 동일합니다.

std::cout : std라는 이름 공간에 정의되어 있는 cout을 의미합니다.
그냥 cout라고 컴파일 한다면 컴파일러가 cout를 찾지 못합니다.

--- 이름공간 정의 방법 ---


**/