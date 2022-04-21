#include <iostream>

using namespace std;

void printallarraydata(string (&arr)[3]){//O(1)

  
  for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){//O(n)
    for (int j=0; j<sizeof(arr)/sizeof(arr[0]); j++){//O(n*n)
      for (int k=0; k<sizeof(arr)/sizeof(arr[0]); k++){//O(n*n*n)
        cout << arr[i] << "     " 
          << arr[j] << "     " 
          <<arr[k] << endl; //O(n*n*n)
      }
    }
  }

  cout << "\n\n\nFirst for loop ended!\n\n" << endl;

  for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){//O(n)
    for (int j=0; j<sizeof(arr)/sizeof(arr[0]); j++){//O(n*n){
      cout << arr[i] << "    " << arr[j] <<  endl; //O(n*n)
    }
  }

  cout << "\n\n\nSecond for loop ended!\n\n" << endl;

  
  for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){//O(n)
    cout << arr[i] << endl; //O(n)
  }
}


int main() {
  
  string my_arr[3] = {"A R", "10 Days", "Ranbir"}; //O(1)
  printallarraydata(my_arr);//O(1)
  
}


// O(3+4n+3n^2+2n^3) >> O(3+2n^3) >> O(2n^3) >> O(n^3)


// O(N^3 + N^2) >> O(N^3)

// O(n^3+n) >> O(n^3)

// O(n^2+3n+4) >> O(n^2)
