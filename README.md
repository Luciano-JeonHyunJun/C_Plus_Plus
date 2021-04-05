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

<h1>코드해석</h1>
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

<h1>코드해석</h1>
우선 바로 int a;이 코드는 a라는 int형 변수를 만들겟다고 선언하는겁니다.
그리고 바로 밑에줄에 a = 90; 이라는것은 int형태의 a라는 변수의 값을 90으로 대입한다는거구요.
<br>
int b = 3; 이렇게 한줄에 바로 변수를 선언과 대입을 하는것을 '초기화'라고 말합니다.

그리고 제가 주석처리해둔곳은 주석을 없애고 실행을 시킨다면 아마 변수의 값이 밑에 있는 5와10으로 초기화 될것입니다.

<h1>변수의 규칙</h1>
1. 숫자로 시작할수 없다.<br>

2. C++에서 사용하는 함수키워드로는 변수명을 지을수 없다.<br>

3. white space는  불가능하다. (띄어쓰기,tap 등등)<br>

4. 변수는 사용되기 이전에 정의되어야 한다.<br>
즉 밑에 코드처럼 쓰면 땡이라는것이다.<br>

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

<h1>const 2021.04.03</h1>
 const는 코드로 하나하나 설명하기보다는 예를 하나들겟습니다.
 :우선 상황은 우리는 프로그램을 하나 만들것입니다 어떤 프로그램이냐면 원의 넓이를 구하는 프로그램입니다.
 <br>
 이제 한번 만들어보겟습니다 .
 
 <pre>
 <code>
 #include <iostream>
 using namespace std;
 
 int main() {
 
  const float PIE = 3.1415926535;
  
  int r = 3;
  float s = r * r * 3.14;
  
  cout<<s<<endl;
  
  int a = 3.1415926535;
  cout<<a<<endl;
  
  ehar ch = 'M';
  cout<<(int)ch<<" "<< int(ch)<<" "<<endl;
  cout<<static_cast<int>(ch)<<endl;
 
 </code>
 </pre>
 
 <h1>코드해석</h1>
우선 const 라는 제한자를 사용하게 되면 중간에 값을 바꾸면 에러가 나는데요.

const라는 제한자를 사용하려면 <strong>const (변수의 자료형) <상수명> = (값)</strong>
 이렇게 말하면 너무 어려우니 한가지의 코드로 예를 들겟습니다
 
 <pre>
 <code>
 const float PIE = 3.1415926535;
 </pre>
 </code>
코드를 보시면 알겟지만 우선 제일 중요한 const를 씁니다. 
그후에는 변수의 자료형인 float은 실수형이라는 뜻이니 썻고 이제 상수명을 쓰는데요. 상수는 바뀌지 않는 수라는 뜻입니다.
제가 쓴 상수명은 PIE 라는건데 상수값은 절대 바뀌지 않는 파이의 값입니다. 절대 바뀌지도 , 바뀔수도 없는 수 입니다.

그러면 이제 마지막 코드를 보시면
<pre>
<code>
 char ch = 'M';
    cout<<(int)ch<<" "<< int(ch)<<" "<<endl; //아스키코드에선 M은 77
    cout<<static_cast<int>(ch) <<endl;
</code>
</pre>

이 코드는 char ch 값은 string형식의 M으로 두었습니다. 근데 갑자기 cout에선 int로 변환을 시키구요.
그렇다는건 제가 옆에 주석처리로 설명해둔 이유가 있는데요. 아스키코드에서는 M 이라는 글자를 77이라고 인식합니다.
그러면 제가 왜 <strong>int(ch)또는(int)ch</strong> 라고 쓴 이우가 무엇일까요? 그리고 저 방법은 무엇일까요? 
저 방법은 <strong>강제적 데이터형 변환</strong> 라고 합니다.
방법은 아까 설명드린데로 두가지인데요. 코드블록을 이용해서 보여드리자면
<pre>
<code>
typeName(a)
(typeName)a
</code>
</pre>
이런식으로 사용할수 있습니다. 하지만 c++에서는 조금 더 제한적인 데이터형 변환자가 존재하는데요. 그 방법은 바로 
<strong>static_cast<typeName>(변수명)</strong>로 사용할수 있습니다.








 

