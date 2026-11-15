#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){string s;cin>>s;stack<char>st;for(char c:s){if(c=='('||c=='['||c=='{')st.push(c);else if(st.empty()||(c==')'&&st.top()!='(')||(c==']'&&st.top()!='[')||(c=='}'&&st.top()!='{')){cout<<"false\n";return 0;}else st.pop();}cout<<(st.empty()?"true\n":"false\n");}
