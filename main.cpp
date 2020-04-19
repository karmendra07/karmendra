
#include <iostream>
//#include<stdlib.

int add(int x, int y);
int main ()
{
 int a,b,i;

 std ::  cout << "Enter values to add:";
 std ::  cin >> a >> b ; 
 std ::  cout << "The sum of two number is: \n" ;
// std:: cout<< add(a,b) << '\n';
 for(i=0;i<10;i++)
{
 std :: cout << add(a,b) <<'\n'; 
}
  return 0;
}
