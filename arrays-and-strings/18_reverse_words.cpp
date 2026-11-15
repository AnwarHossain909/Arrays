#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main(){string s,word;getline(cin>>ws,s);stringstream in(s);vector<string>words;while(in>>word)words.push_back(word);for(int i=words.size()-1;i>=0;--i)cout<<words[i]<<(i?' ':'\n');}
