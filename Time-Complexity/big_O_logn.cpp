#include <iostream>

using namespace std;

void nlognruntime(int n){

  int count=0;
  
  // i*=2 >> 
  for (int i=1; i<n; i*=2){
    cout << i << " ";
    count++;
  }


  cout << "\nLoop run " << count <<" times." << endl;
  
}


int main() {
  
  int n=1000;
  nlognruntime(n);
  
}

//O(logn)

