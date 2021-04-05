# C_Plus_Plus
C++ 기초를 코드로 정리하는 커밋입니다.   / It's a commit that cleans up the C++ basics into code.

<h1>Hello World</h1>

<pre>
<code>
#include <iostream>
using namespace std;

int main() {

 cout << "Hello World" << endl;

 return 0;
}

</code>
</pre>

<h1>C++ variable</h1>

<pre>
<code>
#include <iostream>
using namespace std;
 
int main() {

  int al
  a = 90;
  
  int b = 3;
  
  cout<<"a = "<<a<<", b = "<<b<<endl;

 return 0;
}

</code>
</pre>

<h1>C++ const</h1>

<pre>
<code>
#include <iostream>
using namespace std;

int main() {

 const float PIE = 3.1415926535
 
 int r = 3;
 float s = r * r * 3.14;
 
 cout<<s<<endl;
 
 char ch = 'M'
 cout<<(int)ch<<" "<<int(ch)<<" "<<endl;
 cout<<static_cast<int>(ch)<<endl;
 
  return 0;
  
}

</code>
</pre>

<h1>C++ DataType</h1>

<pre>
<code>
#include <iostream>
#include <climits>
using namespace std;

int main() {

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;
    
	cout << "short은 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;
    
	cout << "long은 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;
    
	cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;
    
	return 0;
}

</pre>
</code>





