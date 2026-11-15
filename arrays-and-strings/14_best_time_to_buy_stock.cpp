#include <algorithm>
#include <iostream>
using namespace std;
int main(){int n,price,low=1e9,best=0;cin>>n;while(n--){cin>>price;low=min(low,price);best=max(best,price-low);}cout<<best<<'\n';}
