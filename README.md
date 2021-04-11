# C_Plus_Plus
C++ 기초를 코드로 정리하는 커밋입니다.   / It's a commit that cleans up the C++ basics into code.

## HelloWorld 

~~~Cpp

	#include <iostream>
	using namespace std;
	
	int main() {

	cout<<"HelloWorld""<<endl;
	return 0;
	}

~~~

## 코드해석 

### 시작하기 전에

**Helllo Wolrd**는 프로그래머 분들이라면 거의 대부분 새로운 언어를 시작할때마다 쓰는 첫 출력방식일텐데요.<br />
C++에서는 HelloWorld를 출력하기 위해선 파이썬에 비해서 많은 코드를 작성해야합니다.<br />
그리고 C++과 파이썬의 가장 큰 차이점을 말하라고 하면 저는 언어의 실행 방식입니다. <br /><br />
우선 파이썬에 경우 인터프리터 언어입니다, 인터프리터 언어는 소스코드를 한번에 실행 시키는 언어 방식을 말합니다. <br />
대표적으로는 파이썬이라는 언어가 인터프리터 언어인데요. 인터프리터 언어의 특징을 살펴보자면

1. 컴파일하지 않고 바로 실행시키기 때문에 속도가 느립니다.
2. 빌드과정이 없이 실행이 가능합니다.

<br />

이제 컴파일 언어를 알아보자면 대표적으로 Java,C,C++등이 있구요. <br />
컴파일 언어는 소스 코드를 컴파일 한 후 기계어를 CPU/메모리를 통해 읽어 실행하는 방식으로 동작하는 언어방식입니다.<br />
컴파일 언어의 특징을 살펴보자면
1. 규모가 큰 프로그램은 컴파일 시 오래 걸릴 수 있다.
2. 컴파일 후에는 모든 소스코드가 기계어로 변환되어 있기 때문에 실행 시간이 빠르다.
<br />

## Main()
int **main** 에서 main은 C++에서는 원칙적으로 main함수 밑에서부터 처리가 되는데요. <br />
C++코드에서는 프로그램의 본체가 되는 부분이 있습니다. 바로 밑에 코드인데요.<br />

~~~Cpp

int main() {

return 0;

}
~~~

위에 있는 코드가 C++에서는 프로그램의 본체가 되는 코드입니다. <br />
C++에서는 코드실행이 **return 0;** 까지 온다면 실행이 끝이 납니다. <br />
중괄호{} 로 둘러싸인 부분은 **블록(block)** 라고 부릅니다.
<br />
## 파일 인클루드
HelloWorld코드에서 가장 위에 부분을 보시면 이런 코드가 존재합니다.
~~~Cpp
#include <iostream>
~~~
이 부분을 인클루드 라고 부르며 , **iostream**은 화면에 출력하는 기능을 define한 파일을 가리킵니다. <br />
이 파일 읽는 작업을 우리는 **인클루드** 라고 부릅니다.<br />
**iostream**이 없다면 자료형을 출력시키는 **cout**는 정상적인 기능을 할수 없습니다.
<br />
그리고 C++에서는 iostream처럼 미리 읽어두는 파일을 가리켜 **헤더파일** 이라고 부릅니다.<br />
또한 iostream옆에 있는 #include의 #이 붙은 행은 컴파일러에 포함된 전처리기라는 특별한 부분에 의해 다른코드에 번역되기 전에 읽어들여집니다. <br />

## using namespace std;
원래 C++에서는 무언가를 출력시키기 위해서는 밑에 코드처럼 써야합니다.
~~~ Cpp
std.cout<<"HelloWorld"<<endl;
~~~
하지만 두번째 줄에 있는 **using namespace std;** 를 사용한다면 그냥 쓰는거처럼 **cout**라고 적어도 무방합니다.

---

## Variable 

~~~ cpp

#include <iostream>
using namespace std;

int main() {

int a;
a = 3;

cout<<"a = "<<a<<endl;
return 0;
}
~~~

## 코드해석
처음에 블록부분을 보시면 **int라는 자료형에 a라는 variable이 있다고 선언했습니다.** <br />
그 바로 밑에줄에는 a라는 variable은 **3이라는 값**을 대입시켰구요. <br />
그리고 cout출력 줄을 보시면 알겟지만 , 우선 **a =** 이라고 출력이 되고 , 그 이후 a의 대입값인 **3** 이 나오게 됩니다.<br /> 

## 변수값 초기화 
변수값을 초기화 하는 방법은 매우 복잡한거 같지만 알고나면 매우 쉬운데요.<br />
이번에도 예시는 코드로 들도록 하겟습니다. <br />

~~~Cpp
#include <iostream>
using namespace std;

int main() {

int a;
a = 3;

int b;
b = 5;

cout<<"a = " << a << endl;
cout<<"b = " << b << endl;

a = 5;
b = 3;

cout<<"a = " << a << endl;
cout<<"b = " << b << endl;

return 0;
}
~~~
위에 코드는 **int형의 variable인 a와b의 대입값을 변경하는것입니다.** <br />
출력 결과는 블록내부에선 순차적으로 밑으로 내려오니 return바로 위에 있는 변수 대입값 초기화 한 값이 출력이 됩니다.

### 변수명의 규칙

1. 숫자로 시작하면 안됩니다.
2. C++에 이미 있는 함수명으로 하면 안됩니다.
3. white space 즉 tap또는 space를 사용하면 안됩니다. 하려면 언더바_ 를 사용하시면 됩니다.

## 리터럴
우선 **리터럴(literal)이란** 















