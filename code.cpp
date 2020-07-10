#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
  string A;
  long long int a,p;
  int i,sum=0,sum2=0;
  cin>>A;
  p=A.size();
  cin>>a;
  for(i=0;i<p;i++)
  {
      if(A[i]=='a')
      {
          sum=sum+1;
      }
  }
 long long int k=a/p;
  long long int j=a%p;
  for(i=0;i<j;i++)
  {
      if(A[i]=='a')
      {
        sum2=sum2+1;
      }
  }
  cout<<sum*k+sum2;
}
