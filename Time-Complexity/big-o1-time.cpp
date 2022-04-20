// 1st program

#include <iostream>

using namespace std;

void printfirstelementofarr(string (&inparr)[5]){
  cout << inparr[0] << endl;
}

int main() {
  
  string my_arr[5] = {"A R","10 Days", "Three", "four", "five"};
  printfirstelementofarr(my_arr);
  cout << "Exit!\n";
}





// 2nd program


#include <iostream>

using namespace std;

void printfirsttwoelementofarr(string (&inparr)[1000]){
  cout << inparr[0] << endl;
  cout << inparr[1] << endl;
}

int main() {

  /*string my_arr[5] = {"A R","10 Days", "Three", "four", "five"};*/
  
  
  string mul_arr[1000];
  for (int i =0; i<1000; i++){
    mul_arr[i] = "Hello";
  }
  
  
  printfirsttwoelementofarr(mul_arr);
  
  cout << "Exit!\n";
}
