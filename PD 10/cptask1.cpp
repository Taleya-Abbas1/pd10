#include<iostream>
using namespace std;
bool Sort(int size , int temp );
main()
{
   int size ;
   int temp ;
   cout << "Enter the length of string you want to take :" ;
   cin >> size;
   if(Sort(size , temp))
   {
    cout << "True ";
   }
   else 
   {
    cout << "false" ;
   }
}

bool Sort(int size , int temp)
{
    bool output = true;
    int arr[size];
    for (int i = 0 ; i <size ; i ++ )
   {
     cin >> arr[i];
   }
   for(int i = 0 ; i <size ; i ++)
  {
    for(int j = 0 ; j< size - i; j++)
    {
        if(arr[j] > arr[j+1])
        {
           temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp ;

        }

     }
  }

  for (int i = 1 ; i <size ; i ++)
  {
    if((arr[i] == arr[i-1]) || (arr[i] - arr[i-1] != 1)) 
    {
        output=false;
        break ;
    }
    
    
  }
   return  output;
   
  


 }
