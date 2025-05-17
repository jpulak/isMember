// recursive program write

#include <iostream>
using namespace std;

//recursive boolean function ismember 

bool isMember(const int arr[], int size, int value){
  if (size == 0){
    return false; //array size is 0 so nothing to check
  }
  if (arr[size - 1] == value){
    return true; // if last value = value
  }
  return isMember(arr,size - 1, value); // keep shrinking arrary
}

//driver function

int main(){

  // initialize vars

  const int MAX = 20;
  int arr[MAX], size;

  //input arr size

  cin >> size; 

  //size of arraby must be within 1-20 validation

  if (size < 1 || size > 20)
  {
    cout << "x_x invalid arr size" << endl;
    return 1; //exit function
  }

  // array values must be 1-20 validation

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i]; //take in arr elemetns
    if (arr[i] < 0 ||arr[i] > 20)
    {
      cout << "x_x invalid value";
      return 1; //exit func
    }
  }

  //chack each value from 0 to 20 and output

  for(int i = 0; i <= 20; i++)
  {
    if(isMember(arr, size, i))
    {
      cout << i << " is found in the array." << endl;
    }
    else
    {
      cout << i << " is not found in the array." << endl;
    }
  }

  return 0;
}
