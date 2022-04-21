// program 1


#include <iostream>

using namespace std;

void printallarraydata(string (&arr)[3]){//O(1)

  
  for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){//O(n)
      cout << "i value is " << i << endl;//O(n)
      for (int j=0; j<sizeof(arr)/sizeof(arr[0]); j++){//O(n*n)
        cout << "j value is " << j << endl;//O(n*n)
        cout << arr[i] << " " << arr[j] << endl;//O(n*n)
      }
  }
  /*for (int i=0; i<sizeof(arr2)/sizeof(arr2[0]); i++){//O(n2)
    cout << arr2[i] << endl; //O(n2)
  }*/
  
  
}


int main() {
  
  string my_arr[3] = {"A R", "10 Days", "Ranbir"}; //O(1)
  //string my_arr2[4] = {"Kavya", "Ranbir", "Katrina", "Saif"}; //O(1)
  //printallarraydata(my_arr, my_arr2);//O(1)
  printallarraydata(my_arr);//O(1)
  
}

// O(3+2n+3n^2) >> O(2n + 3n^2) >> O(3n^2) >> O(n^2)




//program 2


#include <iostream>

using namespace std;

void printallarraydata(string (&arr)[3], string (&arr2)[4]){//O(1)

  
  for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){//O(n1)
    cout << arr[i] << endl;//O(n1)
    for (int i=0; i<sizeof(arr2)/sizeof(arr2[0]); i++){//O(n1*n2)
      cout << arr2[i] << endl; //O(n1*n2)
    }
  }

  
  for (int i=0; i<sizeof(arr2)/sizeof(arr2[0]); i++){//O(n2)
    cout << arr2[i] << endl; //O(n2)
  }
}


int main() {
  
  string my_arr[3] = {"A R", "10 Days", "Ranbir"}; //O(1)
  string my_arr2[4] = {"Kavya", "Ranbir", "Katrina", "Saif"}; //O(1)
  printallarraydata(my_arr, my_arr2);//O(1)
  
}

// O(4+2n1+2n2+2(n1*n2)) >> O(2n1+2n2+2(n1*n2)) >> O(2(n1*n2))
// O(n1*n2)
