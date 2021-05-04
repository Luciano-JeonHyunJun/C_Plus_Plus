#include <iostream>

using namespace std;

int main() {

    int a = 77; //분명 77이라고 값을 대입시키고
    char b = a; // b = a라고 변형
    cout<< b << endl; // 아스키 코드기준 77은 M 

    //문자를 입력하는 방식은 따옴표만 추가해주면 끝
    char c = 'd'; 
    cout<<c<<endl;

    bool e = 0; //boolean 0 또는 1 
    bool f = 1;
    bool g = 10;   //0과1로만 인식을해서 10이 출력이 아닌 1로 출력        
    
    cout<<e<<" "<<f<<" "<<g<<" "<<endl;

    return 0;

}

/*
char: 작은 문자열 
- 작은 문자열이란 거의 대부분 한단어

작은 문자열은 작은따옴표 ''
큰 문자열은 큰 따옴표 ""

큰문자열은 char에서 사용할수 없음
-null문자로 사용하기때문에

큰 따옴표를 사용할수 없는 이유는 명시적으로 "" 는 null문자가 포함되있음
-string

char b = "a"; 라고쓴다면 null문자열 표현방법인 \0과 , a를 같이
인식하기 때문에 한 단어가 아니라서 출력이 안됩니다.

한글을 사용하는 방법은 string을 사용하면 됩니다.

0 : False , 1은 True로 표현합니다.
*/
