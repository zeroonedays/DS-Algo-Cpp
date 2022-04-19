// 1st program


#include <iostream>
#include <ctime> // we can use this one too
#include <iomanip>

using namespace std;


int main() {
  const clock_t begin_time = clock();
  // the work...
  
  /*
  string myname = "A R";
  cout << myname << endl;
  */
  
  
  string my_arr[4] = {"A R", "Danish", "One Zero", "Days"};
  for (int i =0; i<4; i++){
    cout << my_arr[i] << endl;
  }
  
  

  // work end.
  float timetaken = float( clock () - begin_time ) /  CLOCKS_PER_SEC;
  cout << fixed << setprecision(32) << "time taken "<< timetaken << " second" << endl;
  cout << "Exit!\n";
}






// 2nd programs




#include <iostream>
#include <ctime> // we can use this one too
#include <iomanip>

using namespace std;

void findastringinarraylist(string (&inparr)[100000]){
  //int arrlen =  sizeof(inparr)/sizeof(inparr[0]);
  for(int i=0; i<sizeof(inparr)/sizeof(inparr[0]); i++){
    if(inparr[i]=="Hello"){
      cout << "Found " ;
    }
  }
}

int main() {
  const clock_t begin_time = clock();
  // the work...
  
  string my_arr[100000];
  for (int i =0; i<100000; i++){
    my_arr[i] = "Hello";
  }
  
  
  findastringinarraylist(my_arr);


  // 0.01941899999999999876232337214788
  // 0.01348899999999999925470728356913
  // work end.
  double timetaken = double( clock () - begin_time ) /  CLOCKS_PER_SEC;
  cout << fixed << setprecision(32) << "\ntime taken "<< timetaken << " second" << endl;
  cout << "Exit!\n";
}
