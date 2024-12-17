// Ls 37.5 Passing Vectors into functions
// Caleb Curry - C++ Programming Tutorial 52 - Passing Vectors to Functions

#include <iostream>
#include <vector>
#include <limits>

using std::cout, std::cin, std::endl, std::vector;

// This will consume lot of memory as a new separate variable is created.
// Instead, we should pass by reference.
/*
vector<int> bubbleSort(vector<int>arr){
  int length = arr.size();
  int temp;

  cout<<"Applying Bubble Sort Algorithm"<<endl;

  for(int i=0; i<length; i++){
    for(int j = 0; j<(length-1);j++){
      if(arr[j]>arr[j+1]){

        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;

      }
    }
  }
  return arr;

}
*/
void bubbleSort(vector<int> &arr)
{
    int length = arr.size();
    int temp;

    cout << "Applying Bubble Sort Algorithm" << endl;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < (length - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(vector<int> sorted_Array)
{
    for (int i = 0; i < sorted_Array.size(); i++)
    {
        cout << sorted_Array[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> array;
    // vector<int>sorted_Array; //required for passing by value
    int temp;

    for (;;)
    {
        if (cin >> temp)
        {
            array.push_back(temp);
        }
        else
        {
            break;
        }
    }
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // sorted_Array = bubbleSort(array);
    // printArray(sorted_Array);
    bubbleSort(array);
    printArray(array);
}