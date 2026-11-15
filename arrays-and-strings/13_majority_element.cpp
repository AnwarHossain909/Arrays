#include <iostream>
using namespace std;
int main(){int n,candidate=0,count=0;cin>>n;while(n--){int x;cin>>x;if(count==0)candidate=x;count+=x==candidate?1:-1;}cout<<candidate<<'\n';}
