#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;int write=0;for(int x:a)if(x!=0)a[write++]=x;while(write<n)a[write++]=0;for(int i=0;i<n;++i)cout<<a[i]<<(i+1==n?'\n':' ');}
