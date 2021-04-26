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
우선 **리터럴(literal)이란** C++에서 string이나 int처럼 출력이 되는것을 **리터럴**이라고 합니다. <br />

~~~ cpp
#include <iostream> 
using namespace std;

int main() 
{
	cout << 'A' << '\n';
	cout << "C++ 세상에 오신 것을 환영합니다! \n";
	cout << 123 << '\n';

return 0;
}

~~~

위에 코드를 보시면 알겟지만 저 코드를 실행을 해보면 값은 

~~~
A 
C++ 세상에 오신 것을 환영합니다! 
123

~~~

이런 결과값이 나오는데요. 위와 같이 쉽게 말해서 **일정한 '값'을 표현할 때 이용되는 C++의 단어 같은 것들** 이라고 생각하시면 됩니다. <br />
리터럴은 총 4가지로 분류가 되는데요. <br />
1. 문자열 리터럴
2. 문자 리터럴
3. 숫자 리터럴
4. 논리 리터럴

### 문자 리터럴
C++에서는 리터럴을 두가지로 분류합니다. <br />
1. 하나의 문자
2. 연속된 문자(문자열)

우선 **문자 하나를 표현하는 방법**부터 알아보겠습니다.<br />
문자 하나는 **문자 리터럴**이라고 부릅니다. 

문자 리터럴의 사용방법은 매우 간단합니다. **'(str)'**(str생략) 를 사용하시면 됩니다. <br />
출력을 시켜보면 결과값은 따옴표가 생략된채로 출력이 되는것을 보실수 있습니다.

## 상수
### const 지정
우선 c++에서 변수에서는 같은 name 같은 type에서 값을 변경하면 variable값이 변경되는데요.<br />
이번에는 값을 바꿀수 없는 변수를 만들어보겠습니다.
우선 코드로 설명하겟습니다.

~~~cpp 
#include <iostream>
using namespace std;

int main() {
const double pi = 3.1415;

cout<<"파이의 값은"<< pi << "입니다" << endl;

//pi = 1.44;

return 0;
}
~~~

만약에 주석처리 해둔 pi를 삭제시킨다면 어떤일이 발생할까요?<br />
우선 주석을 없애면 **컴파일** 이 불가능합니다

## 식과 연산자
컴퓨터는 다양한 일을 **계산** 해서 처리 하는데요. <br />
이번에는 **계산** 에 대해서 알아보겟습니다.<br />
c++에서 **식(expression)** 은 대부분 두가지로 나눠지는데요
1. 연산자(연산하는 것 : operator)
2. 피연산자(연산 대상 : operand)

이 두가지를 조합해서 만드는것입니다. 예를 한가지 들어볼까요? <br /> 
**1+2** 이런 계산식이 있다면 **연산자는 +** 입니다. 그러면 **피연산자는 1 , 2** 겠네요.

### 식의 값 출력

~~~cpp
#include <iostream>
using namespace std;

int main() {

cout<< " 1 + 2는 " << 1 + 2 << "입니다." <<< endl;
cout<< " 1 - 2는 " << 1 - 2 << "입니다." <<< endl;
cout<< " 1 * 2는 " << 1 * 2 << "입니다." <<< endl;
cout<< " 1 / 2는 " << 1 / 2 << "입니다." <<< endl;

return 0;
}

~~~

이런 코드를 작성할수 있습니다.

## 관계 연산자와 조건식
일상생활에서 조건식을 예로 들어보자면 <br />
~~~
만약 부모님께 효도를 한다면
기분이 좋아진다
만약 효도를 하지 않는다면
기분이 좋지는 않다
~~~

이런거처럼 C++에서는 다양한 상황을 표현하기 위해 **조건(condition)** 이라는 개념을 사용합니다.<br />
우선 C++에서는 위에 예시처럼 한국어로는 조건을 만들수는 없고 영어로 해야하는데요 <br />
조건문은 딱 두개만 아시면 됩니다.<br />
1. True(참, 1)
2. False(거짓, 0)
<br />
이거만 알고 가시면 됩니다. 이제 조건문 코드를 작성해보겠습니다.

### if문
~~~cpp

if(조건)
	문장;
~~~

위에 조건문은 **참(True)** 일때 실행됩니다.

~~~cpp
#include <iostream>
using namespace std;

int main() 
{
	int res;
	
	cout<< " 정수를 입력하세요 " << \n;
	
	cin >> res
	
	if(res == 1)
		cout<< "1이 입력되었습니다"<<\n;
		
	cout << "처리를 종료합니다 \n";
	
	return 0;
}
~~~

우선 위에 코드는 조건문을 하나만 만들었는데요<br />
위에 코드는 제가 만약 값을 10으로 썻다면 **False**가 출력됬을겁니다. <br />
그러면 반대로 1을 넣었다면? **True**가 정상적으로 출력이 됩니다.

### if문으로 여러개의 문장 실행
이걸 시작하기 앞서서 원래 제가 사용하던 언어인 파이썬에서는 조건문 형식이 밑에 코드와 같은데요.
~~~python
a = 1
b = 2

if a > b:
	print("a")
elif a < b:
	print("b")
else:
	print("아무것도 아니지롱")
	
~~~

이런식으로 조건문을 성립시켰는데 , c++에서는 어떤지 보시죠~! <br/>
코드를 쓰기전에 구문부터 써보겟습니다.
~~~
if(조건){
	Sentence 1;
	Sentence 2;
}
~~~

이런식으로 쓰면 됩니다. 파이썬과 차이가 느껴지시나요? 우선 파이썬에서는 여러조건을 성립시키기 위해서는 if 말고 elif로 가능했었는데요.<br />
이제 한번 구문말고 코드로 보여드리겠습니다. 
~~~cpp
#include <iostream>
using namespace std;

int main() {
	int res; //변수 선언
	
	cout<<"정수를 입력하세요"<<\n;
	
	cin >> res; //키보드 입력을 받으면 res값으로 저장합니다.
	
	if(res == 1){ //1이 입력이 되면true
	
	cout << "1이 입력되었습니다.\n";
	cout << "1을 선택했습니다.\n";
	
}

	cout << "처리를 종료합니다.\n";
	
	return 0;
}

~~~

우선 위에 코드는 옆에 주석으로 해석을 해드렷는데요. 위에 코드는 일단 1이라는 값을 입력을 받으면 순서대로 **1이 입력되었습니다.,1을 선택했습니다.** 를 출력하는데요.
만약에 False라면 **1이 입력되었습니다.,1을 선택했습니다.** 이 두 string은 출력 되지 않고 , **처리를 종료합니다.** 만 출력이 됩니다.
<br />

#### 조건문을 블록{}으로 감싸지 않는다면?
만약 블록{} 으로 감싸지 않으면 어떻게 될까요? <br />
우선 코드부터 써보겟습니다. <br />
~~~cpp 
#include <iostream>
using namespace std;

int main() {
	int res; //변수 선언
	
	cout<<"정수를 입력하세요"<<\n;
	
	cin >> res; //키보드 입력을 받으면 res값으로 저장합니다.
	
	if(res == 1){ //1이 입력이 되면true
	
	cout << "1이 입력되었습니다.\n";
	cout << "1을 선택했습니다.\n";
	


	cout << "처리를 종료합니다.\n";
	
	return 0;
}
~~~

우선 실행을 시킨다면 출력이 이상하게 됩니다. <br />

~~~ 
정수를 입력하세요
->2 
1을 선택했습니다.
처리를 종료합니다.
~~~

이런식으로 결과가 이상한데요. 우선 결과 값이 이상한 이유부터 알아보자면 <br />
if문은 분명히 **조건을 수행하려고 했으나 , {}으로 감싸지 않았기 때문에** 제대로 실행이 되지 않습니다. <br />
그래서 대부분은 코드에 들여쓰기를 사용해서 **가독성** 을 높힙니다. <br />

### if ~ else문
우선 if문은 조건이 True인 경우에만 실행이 됬는데요. 이번에는 조건이 **False**인 경우에도 특정 코드를 실행시키는 <br />
**if - else**문을 알아보겟습니다.<br />
우선 if~else문의 구문인데요. 밑에 코드를 봐주세요 :)
~~~
if(조건)
	Sentence 1;
else
	Sentence 2;
~~~ 

이 구문은 조건이 참일시 Sentence 1을 출력시키지만 만일 **False**라면 Sentence 2를 출력시킵니다.<br />
이번에는 한번 if~else문으로 여러개의 조건문장을 처리해보겟습니다.<br />
~~~
if(조건){
	Sentence 1;
	Sentence 2;
}
else
	Sentence 3
	Sentence 4
	
}
~~~
위에 구문을 보시면 알테지만 우선 많은 조건을 쓸때 제가 주력으로 사용하던 언어와 차이점이 존재하는데요. <br />
바로 **else** 입니다. 우선 파이썬 else 구문을 소개하자면 <br />

~~~python
if (조건):
	Sentence 1
else:
	Sentence 2
~~~ 



















