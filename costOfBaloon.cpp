#include <iostream>
using namespace std;

int main(){
  int tc;
  cin >> tc;
  while(tc > 0){
    int c1, c2, n, total1, total2;
    cin >> c1 >> c2;
    cin >> n;
    total1 = 0;
    total2 = 0;
    for(int i=0; i<n; i++){
      int p1,p2;
      cin >> p1 >> p2;
      total1 += (c1*p1 + c2*p2);
      total2 += (c2*p1 + c1*p2);
    }
    int res = (total1<total2) ? total1 : total2;
    cout << res << endl;
    tc--;
  }
  return 0;
}
