#include <iostream>

using namespace std;

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// Function to find the smallest  element in an array
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //

int main()
{

  int i, n;
  int array[100];

  cout << "Enter total number of elements(1 to 100): ";
  cin >> n;
  cout << endl;

  // elements entered i the array
  for (i = 0; i < n; ++i)
  {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> array[i];
  }

  for (i = 1; i < n; ++i)
  {

    // smallest element
    if (array[0] > array[i])
      array[0] = array[i];
  }
  // print  the largest value
  // for(i = 1;i < n; ++i) {
  cout << "\n"
       << " int smallest = " << array[0] << "; \n";
  // findSmallest();
  for (i = 1; i < n; ++i)
  {

    // largest element
    if (array[0] < array[1] && array[1] < array[i])
    {
      array[1] = array[i];
    }
    cout << " int largest = " << array[1] << "; \n";

    return 0;
  }
}