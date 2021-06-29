#include <iostream>
using namespace std;


int fibo_func(int n)
{
  int fibo = 1;
  int fiboPrev = 1;  // initialize variables for use in algorithm
  int temp;
  if (n <= 1)
  {
    return n;  // error handling
  }
  for (int i = 2; i < n; ++i)
  {
    int temp = fibo;  // temp operation 1
    fibo += fiboPrev;
    fiboPrev = temp; // temp operation 2
  }
  cout<<fibo; // print fibo number calculation

  // return fibo_func(n);
}


int main ()
{
  cout << "Enter Fibonacci number: " << endl;
  int userinput;
  cin >> userinput;
  cout << endl;
  for (int i = 1; i <= userinput; i++)
  {
    fibo_func(i);
    cout << endl;
  }

}
