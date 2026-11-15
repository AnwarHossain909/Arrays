#include <array>
#include <iostream>
#include <string>
using namespace std;
int main(){string a,b;cin>>a>>b;array<int,256>ab,ba;ab.fill(-1);ba.fill(-1);if(a.size()!=b.size()){cout<<"false\n";return 0;}for(int i=0;i<(int)a.size();++i){unsigned char x=a[i],y=b[i];if((ab[x]!=-1&&ab[x]!=y)||(ba[y]!=-1&&ba[y]!=x)){cout<<"false\n";return 0;}ab[x]=y;ba[y]=x;}cout<<"true\n";}
