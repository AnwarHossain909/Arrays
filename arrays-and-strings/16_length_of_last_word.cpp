#include <iostream>
#include <string>
using namespace std;
int main(){string s;getline(cin>>ws,s);int i=s.size()-1;while(i>=0&&s[i]==' ')--i;int length=0;while(i>=0&&s[i]!=' '){++length;--i;}cout<<length<<'\n';}
