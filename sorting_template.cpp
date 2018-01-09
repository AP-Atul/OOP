#include <iostream>

using namespace std;

template <typename T>
void selection( T a[],int n)
{
   int min;
   for (int i = 0 ;i< n ;i++)
    {


      min = i;

      for (int j = i+1 ;j<=n;j++  )
      {
          if (a[j] < a[min])
          {
            min = j;
          }
    }


      if (min != i)
        {
        int temp;
      temp=a[min];
      a[min]=a[i];
      a[i]=temp;

        }

}
cout<<"\nSorted array is::";
for(int i=0;i<n;i++)
{
    cout<<a[i];
}
}


int main()
{
   int a[10];
   float a1[10];
   int n;

   cout<<"\nEnter number of elements in array::";
   cin>>n;
   cout<<"\nEnter elements::";
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       cin>>a1[i];
   }
   selection(a,n);
   selection(a1,n);
    return 0;
}
