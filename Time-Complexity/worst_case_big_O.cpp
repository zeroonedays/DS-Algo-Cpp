#include <iostream>

using namespace std;

void findanelementinarr(string (&arr)[10]){

  for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){

    cout << "loop run " << (i+1) << " times" << endl;
    if(arr[i]=="Kavya"){//O(n)
      cout << "Found" << endl;//O(n)
      break;
    }
  }  
}


int main() {

  string my_arr[10] = {"A R", "Aditi", "Dwedi", "Rahul", "Karishma", "Kavya", "Kareena", "Shahrukh", "Ranbir","Katrina"}; //O(1)
  findanelementinarr(my_arr);//O(1)
  
}

// O(3)
//O(2+2n) >> O(n)
// O(1) Best case
// O(n) // Worst case
