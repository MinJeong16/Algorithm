#include<iostream>
#include <set>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		set<char> s;
        string str;
        cin >> str;
        for(int i = 0; i < str.size(); i++){
            s.insert(str[i]);
        }
        printf("%s%d %d\n","#",test_case,s.size());
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
