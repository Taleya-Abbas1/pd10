 #include<iostream>
 using namespace std ;
 int spin(int n ,string arr[]);
 main(){
  int  n ; 
  cout << "Enter the size of the string :" ;
  cin >>n;
  string arr[n] ;
  for(int i = 0 ; i < n ; i ++)
  {
    cin >> arr[i];
  }
  cout <<spin(n , arr) ;
 }
int spin(int n ,string arr[])
{
  int result = 0;
  int check  ;
  for(int i = 0 ; i< n ; i++)
  {
    if(arr[i] == "right")
    {
      result += 90 ;
    }
    if(arr[i] == "left")
    {
      result -= 90 ;
    }
  }
  check = result /360 ;
  if(check < 0)
  {
    check = check * (-1) ;
  }
  return check ;
}