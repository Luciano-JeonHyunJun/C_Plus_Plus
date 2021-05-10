#include <iostream>
#include <string>
using namespace std;

int main() 
{

    string str;

    do{
        cout << "텍스트 입력:";
        getline (cin,str);
        cout << "입력했습니다 :"  << str << '\n';
    }while (str != "goodbye");
    
    
    return 0;
}

/** 
getline : cin값을 가져오는것 / 즉 입력받은것을 출력하라는것
!= 비교연산자 (참과 거짓을 판단합니다.)

**/