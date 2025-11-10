#include <iostream>
#include <vector>
using namespace std;

int main(){

  int t;
  cin >> t;
  while(t--){
    int n, x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    vector<int> counter(n+1);
    for(int i = 0; i<counter.size();i++) counter[i] = 0;
    for(int i = 0; i<a.size();i++) if(a[i] <= n) counter[a[i]]++;

    int result = 0;
    for(int i=0;i<=n;i++){
      if(counter[i]==0){
        result = i;
        break;
      }
      if(counter[i]>1){
        int move = counter[i]-1;
        int next = i + x;
        if(next <= n) counter[next] += move;
      }
    }

   cout << result << '\n';
  }

  return 0;
}
