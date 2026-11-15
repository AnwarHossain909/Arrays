#include <iostream>
#include <unordered_set>
using namespace std;
int main(){int n;cin>>n;unordered_set<int>seen;while(n--){int x;cin>>x;if(!seen.insert(x).second){cout<<"true\n";return 0;}}cout<<"false\n";}
