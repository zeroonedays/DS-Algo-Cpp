#include <iostream>

using namespace std;

void nlognruntime(int n){ // O(1)

  int count=0; // O(1)
  
  // i*=2 >> 
  for(int j=0; j<n; j++){ // O(n)
    for (int i=1; i<n; i*=2){ // O(nlogn)
      cout << i << " ";// O(nlogn)
      count++; // O(nlogn)
    }
  }
  


  cout << "\nLoop run " << count <<" times." << endl; // O(1)
  
}


int main() {
  
  int n=100; // O(1)
  nlognruntime(n); // O(1)
  
}

// O(n) > O(logn) >> O(nLogn)


// time complexity > O(5+n+3nlogn) >> O(n+3nlogn) 
// > O(3nlogn) >> O(nlogn)
