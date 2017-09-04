#include <iostream>
using namespace std;

int fact (int n, int k)
{ 
 int p=0;
 while (n)
 {
  n=n/k;
  p+=n;
  
 }
  return p;
}
int main()
{
 int n;
 cin>>n;

 cout<<fact(n,5);
 return 0;
}
