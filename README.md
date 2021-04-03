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
밑에 <strong>cout<strong>앞에 std:: 를 붙어줘야합니다. 밑에 코드를 예로 들겟습니다

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
