// Lab_03_3.cpp
// < Могила Тарас Русланович >
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції.
// Варіант 21
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
 double x;
 double y;
 double R;
 
 cout<<"R = "; cin>> R;
 cout<<"x = "; cin>> x;
 
 if(x<=(-6-R))
 {
  y = 0;
 }
 else if (x >(-6-R) && x<=(-6))
 {
  y = 0 - (sqrt((R*R) - ((x+6) * (x+6))));
 }
 else if (x>(-6) && x<=(-R))
 {
  y = ((R*(x+6))/(-R+6)) - R;
 }
 
 else if (x>(-R) && x<=0)
 {
  y = sqrt((R*R) - (x*x));
 }
 else if (x > 0 && x<=3)
 {
  y = (((-R) * x) / 3) + R;
 }
 else
 {
  y = (R*(x-3)) / 6;
 }
  
 cout<<endl;
 cout << "y = " << y << endl;
 cin.get();
 return 0;
}
