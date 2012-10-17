#include "CircularArray.h"

#include <iostream>


using namespace std;


template <typename T>
CircularArray<T>::CircularArray(int n)
{

     arr = new T[n];
     length = n;
//     start = &(arr[0]);
 //    end = &(arr[n-1]);

headIndex = 0;

}


template <typename T>
void  CircularArray<T>::shiftRight(int k){

      int valid = k%length;
      if(headIndex>=valid)
      {
           headIndex=headIndex-valid;

      }
      else{
         
          headIndex = length-valid;

     }

}

template <typename T>
void CircularArray<T>::shiftLeft(int k){


   int valid = k%length; 


  
   headIndex = (headIndex+valid)%length;



}

template <typename T>
T & CircularArray<T>::operator [](int index)
{



     return  arr[(index+headIndex)%length];


}
/*
template <typename T>
void CircularArray<T>::setValue(int position, T val)
{

    arr[position] = val;


}
*/
