#include <iostream>
#include <string>
using namespace std;

string getSeatType(int seat){
  string stType = "";
  switch(seat){
    case 1:
    case 6:
    case 7:
    case 12:
      stType = "WS";
      break;
    case 2:
    case 5:
    case 8:
    case 11:
      stType = "MS";
      break;   
    case 3:
    case 4:
    case 9:
    case 10:
      stType = "AS";
      break;     
    default:
      break;  
  }
  return stType;
}

void printFacingSeat(int seat){
  int mult = seat / 12;
  int rem = seat%12;
  if(rem == 0){
    rem = 12;
    mult--;
  }
  cout << 12*mult + (13 - rem) << " " << getSeatType(rem) << endl;
}

int main(){
  long int tc;
  cin >> tc;
  while(tc > 0){
    int num;
    cin >> num;
    printFacingSeat(num);
    tc--;
  }
  return 0;
}
