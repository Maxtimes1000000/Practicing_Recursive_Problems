//Maximillian Senisch
//COSC-1437-58000
//IDE: repl.it
//Dr.T
//Description: This program is just me trying stuff with recursive functions and playing around. I also start attempting the tower of hanoi problem.
#include <iostream>

using namespace std;

void Fibonacci(int, int);
array StartingStack(int);

int main() 
{
  Fibonacci(0,1);
  return 0;
}
//How I came up with it before seeing the book version based on my knowledge of the fibonacci sequence
void Fibonacci(int a, int b)
{
  if(a == 0 && b == 1)
  {
    cout << a << "\n" << b << "\n";
    Fibonacci(b, a+b);
  }
  else
  {
    cout << b << endl;
    if(a < 100)
    Fibonacci(b, a+b);
  }
}

