#include <iostream>

using namespace std;

int main()
{
  int a,b,c,min;
  cout << "inserire 3 numeri di cui si vuole calcolare il minore: ";
  cin >> a >> b >>  c;
  min = a;
  if(b<min) min=b;
  if(c<min) min=c;
  cout << "il minore dei tre numeri e: " << min << endl;

  return 0;
}