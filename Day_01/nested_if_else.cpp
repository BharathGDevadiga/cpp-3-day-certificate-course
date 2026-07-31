#include <iostream>
using namespace std;

int main() 
{
  int x=3;
  int y=10;
  if(x>2)
    if(y<15)
      x+=5;
      if(x<10)
        y-=3;
      else
        x=y;
      if(y>5)
        if(x<8)
          x=20;
        else
          y=2;
  cout << "x = " << x << ", y = " << y << endl;
}
