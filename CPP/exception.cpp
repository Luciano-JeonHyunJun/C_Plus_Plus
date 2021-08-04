#include <iostream>

using namespace std;

int main()
{

    int a;
    int b;

    cout << "두개의 정수 입력: ";
    cin >> a >> b;

    try{
        if (a == 0) throw a;
        cout << b << "를" << a << "로 나눈 몫은" << b / a << "입니다" << endl;
    }catch(int exception){ // exception 선언
        cout << "예외발생, 나누는 수는" << b << "가 될수 없다" << endl;
    }

    return 0;
}


// try {
//  if (예외조건) throw 예외객체; //예외가 발생시 예외를 던짐
//}catch (예외객체){ //던져진 예외를 잡는 영역
    // 예외처리 영역
//}