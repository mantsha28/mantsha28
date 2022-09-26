#include<iostream>
using namespace std;
int main()
{
  int n, a[n],i,k,j,tem;
  cout<<"enter array size";
  cin>>n;
  cout<<"enter array elements=";
  for(i=0;i<n;i++)
  
  { 
    cin>>a[i];
    }
    
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(a[j]<a[i])
       {
       tem=a[i];
       a[i]=a[j];
       a[j]=tem;
     }
   } 
   }
   cout<<"sorted array ";
   
   for(i=0;i<n;i++)
   {
     cout <<a[i]<<"\t";
   }
   
   return 0;
}
