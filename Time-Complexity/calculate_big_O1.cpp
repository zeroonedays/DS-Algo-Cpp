#include <iostream>

using namespace std;

void printallarraydata(string (&arr)[2]){

  int a = 5;//O(1)
  int b = 6;//O(1)
  int c = a+b;//O(1)
  cout << c << endl;//O(1)

  for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
    cout << arr[i] << endl;//O(n)
    a = a+2;//O(n)
  }
  
  
}


int main() {

  string my_arr[2] = {"A R", "10 Days"};//O(1)
  printallarraydata(my_arr);//O(1)
  
}

// Time complexity : O(6)+O(2n) >> O(6+2n)
//O(2n)  >> O(n)
