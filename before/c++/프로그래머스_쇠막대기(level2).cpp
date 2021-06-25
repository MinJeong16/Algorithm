#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    stack<char> pipe;

    for(int i = 0; i < arrangement.length(); i++){
        if(arrangement[i] == '(') pipe.push('(');
        else{
            pipe.pop();
            if(arrangement[i-1] == '(') answer += pipe.size();
            else answer++;
        }
    }
    return answer;
}
