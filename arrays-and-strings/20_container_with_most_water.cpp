#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;vector<int>h(n);for(int&i:h)cin>>i;int left=0,right=n-1,best=0;while(left<right){best=max(best,(right-left)*min(h[left],h[right]));if(h[left]<h[right])++left;else --right;}cout<<best<<'\n';}
