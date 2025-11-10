#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        vector<int> a(n);

        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(), a.end());

        int cur = a[0];
        for(int i=1;i<n;i++) cur = (cur + a[i]) / 2;
        cout << cur << "\n";
    }
    return 0;
}
