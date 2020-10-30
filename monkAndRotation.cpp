#include <iostream>
#include <vector>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t>0){
    long int n,k;
    cin >> n >> k;
    vector<long int> arr;
    for(long int i=0; i<n; i++){
      long int num;
      cin >> num;
      arr.push_back(num);
    }
    k = k % n;
    for(auto p = arr.cend() - k; p < arr.cend(); p++){
      cout << *p << ' ';
    }
    for(auto p = arr.cbegin(); p < arr.cend() - k; p++){
      cout << *p << ' ';
    }    
    cout << endl;
    t--;
  }
  return 0;
}
