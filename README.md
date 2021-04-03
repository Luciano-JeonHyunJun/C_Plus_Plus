# C_Plus_Plus
C++ 기초를 코드로 정리하는 커밋입니다.   / It's a commit that cleans up the C++ basics into code.

<h1>Hello C++ 2021.04.03</h1>
아마 모든 프로그래머분들은 모든 프로그래밍 언어를 시작할때 설레는 마음으로 "HelloWorld"를 치실텐데요.
저도 C++이라는 언어를 처음시작해보기때문에 떨리는 마음으로 "Hello World" 를 쳐보았습니다.

<pre>
<code>
#include <iostream>
 
using namespace std;
 
int main()
{
    cout << "Hello C++" << endl;
    return 0;
}
</code>
</pre>
위처럼 C++의 Hello World 치는 방법은 저런 방법입니다. 이제 코드 해석을 해보겟습니다.

<h3>코드해석</h3>
제일 윗줄에 <strong>#include <iostream></strong>은 c++에서 <strong>전처리 지시자</strong> 라고 말합니다.
바로 밑에줄인 <strong>using namespace std;</strong>는 나중에 더욱 심화해서 배울테지만 , 이게 없다면
밑에 <strong>cout</strong>앞에 std:: 를 붙어줘야합니다. 밑에 코드를 예로 들겟습니다.

  <pre>
  <code>
#include <iostream>

int main() {

  std::cout<<"HelloWorld"<<endl;
  return 0;
}

  </code>
  </pre>
  
위에 코드처럼 앞에 std:: 붙어줘야합니다. 근데 대부분의 함수들의 끝에 <strong>;(세미콜론)</strong>이 붙어있지 않나요?
c++에서 <strong>;(세미콜론)은 종결자라고 합니다. 즉 코드가 끝나면 꼭 써야합니다.</strong>

int main할때 main도 나중에 더욱 심화해서 소개할예정이지만, 우선 c++에서는 main이라는 이름을 가진 함수가 있어야합니다.
cout는 다음에 나오는 문장을 터미널에 출력시킵니다. 
<br> 그러면 << 은 어떤걸 표현할까요? 바로 <strong>데이터의 방향을 나타냅니다</strong>
<strong>endl;은 줄바꿈을 의미합니다. 그래서 아무리 코드를 꼬아써도 endl;이 없는이상 정상적으로 출력은 됩니다.</strong>

<h1>변수 variable 2021.04.03</h1>
변수 즉 변할수 있는 수를 뜻합니다. 그러면 이번에는 변수에 대해서 알아보겟습니다.
우선 코드를 보시죠.
<pre>
<code>
#include <iostream>
using namespace std;

int main() {

 int a;
 a = 90;
 
 int b = 3;
 
/*

a = 5;
b = 10;

*/

cout<<"a = "<<a<<", b = "<<b<<endl;
return 0;
}

</code>
</pre>

<h3>코드해석</h3>
우선 바로 int a;이 코드는 a라는 int형 변수를 만들겟다고 선언하는겁니다.
그리고 바로 밑에줄에 a = 90; 이라는것은 int형태의 a라는 변수의 값을 90으로 대입한다는거구요.
<br>
int b = 3; 이렇게 한줄에 바로 변수를 선언과 대입을 하는것을 '초기화'라고 말합니다.

그리고 제가 주석처리해둔곳은 주석을 없애고 실행을 시킨다면 아마 변수의 값이 밑에 있는 5와10으로 초기화 될것입니다.

<h5>변수의 규칙</h5>
1. 숫자로 시작할수 없다.
2. C++에서 사용하는 함수키워드로는 변수명을 지을수 없다.
3. white space는  불가능하다. (띄어쓰기,tap 등등)
4. 변수는 사용되기 이전에 정의되어야 한다.
즉 밑에 코드처럼 쓰면 땡이라는것이다.

<pre>
<code>
#include <iostream>
using namespace std;

int main() {

a = 90;
int a;

 return 0;
}

</code>
</pre>

이런식으로 쓰면 틀린겁니다. 변수는 위에서 우선 선언을 하고 시작해야합니다.


