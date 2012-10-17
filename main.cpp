#include "CircularArray.cpp"
#include <iostream>

using namespace std;


int main()
{



   CircularArray<int> * rotate = new CircularArray<int> (5); 


   for(int i = 0;i<5;i++)
   {
          (*rotate)[i] = i;
   }


   rotate->shiftRight(7);
   for(int i=0;i<5;i++)
   {
          cout << (*rotate)[i];

   }

    cout<<endl;
    return 0;


}
