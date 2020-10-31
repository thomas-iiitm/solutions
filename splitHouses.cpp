#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin >> n;
  string temp;
  cin >> temp;
  if(temp.find("HH")!= string::npos){
    cout << "NO" << endl;
  }
  else{
    cout << "YES" << endl;
    for(auto p = temp.cbegin(); p<temp.cend(); p++){
      if(*p == '.'){
        cout << 'B';
      }
      else{
        cout << *p;
      }
    }
    cout << endl;
  }
  return 0;
}
