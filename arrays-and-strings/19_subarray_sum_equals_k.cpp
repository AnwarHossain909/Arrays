#include <iostream>
#include <unordered_map>
using namespace std;
int main(){int n,k,sum=0,answer=0;cin>>n>>k;unordered_map<int,int>count{{0,1}};while(n--){int x;cin>>x;sum+=x;answer+=count[sum-k];++count[sum];}cout<<answer<<'\n';}
