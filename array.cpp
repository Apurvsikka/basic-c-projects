#include <iostream>

using namespace std;

int main(){
    int n;
    int temp;
    int array[n];

   cout<<"Enter the size of array:";
   cin>>n;

   for(int i=0;i<n;i++){
      array[i]=rand()%100;
      cout<<"["<<i+1<<")"<<" "<<array[i]<<"]\n";
   }
    for(int i = 0; i<n/2; i++){
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
    cout << "==reversed array is====\n";
    for(int i = 0; i < n; i++){
    cout<<"["<<i+1<<")"<<" "<<array[i]<<"]\n";

    }
     return 0;

}

// 1. Stack ✔
// 2. queue ✔
// 3. reverse array ✔
// 4. largest/smallest element in array ✔ 