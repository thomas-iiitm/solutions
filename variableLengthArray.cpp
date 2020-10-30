#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> data;
  int n,q;
  cin >> n >> q;
  for(int i=0; i<n; i++){
    int length;
    vector<int> temp;
    cin >> length;
    temp.resize(length);
    for(int j=0; j<length;j++){
      int val;
      cin >> val;
      temp.push_back(val);
    }
    data.push_back(temp);
  }
  for(int i=0; i<q; i++){
    int r,c;
    cin >> r >> c;
    cout << data[r][c] << endl;
  }
  return 0;
}
