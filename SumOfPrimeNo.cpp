#include <iostream>

using namespace std;

int primeno(int n) {
   int i;
   int flag = 1;
   for(i = 2; i <= n/2; ++i) 
   {
      if(n % i == 0)
      {
         flag = 0;
         break;
      }
   }
   return flag;
}
int main() 
{
   int num , i;
   cout << "Enter a number : ";
   cin >> num;
   for(i = 2; i <= num/2; ++i) 
   {
      if (primeno(i)) 
      {
         if (primeno(num - i)) 
         {
            cout << num << " = " << i << " + " << num-i << endl;
         }
      }
   }
   return 0;
}
