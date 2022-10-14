// Make a program that finds the minimum and maximum values among three integer values.

// int num1, num2, num3;
// cin >> num1 >> num2 >> num3;
// Find the min and max among three values.
// Display the numbers with ascending order ( min, other, max).
#include <iostream>
using namespace std;
int main() {
int a, b, c;
int max, min, mid;
  cin >> a >> b >> c;

if ((a > b) && (a > c)) { 
max = a;
  if (b > c) { 
    mid = b;
    min = c;
    }
  else {
    mid = c;
    min = b;
  }
}
  
else if ((b > a) && (b > c)) { 
max = b;
  if (a > c){
    mid = a;
    min = c;
  }
  else {
    mid = c;
    min = a;
  }
}
  
else { 
  max = c; 
  if (a > b) {
    mid = a;
    min = b;
  }
  else {
    mid = a;
    min = b; 
  }
}
cout << "MIN: " << min << endl;
cout << "MID: " << mid << endl;
cout << "MAX: " << max << endl;
  return (0);
}