#ifndef _CIRCULAR_ARRAY
#define _CIRCULAR_ARRAY
#include <iostream>



using namespace std;


template <typename T>

class CircularArray
{

    public:
        CircularArray<T>();
        CircularArray<T>(int n);
     //   void setValue(int position, T val);
        void shiftRight(int k);
        void shiftLeft(int k);
       
        T & operator [](int index);


    private:

        int length;
       T * arr;
      //  T * start;
       // T * end;
       int headIndex;




};





#endif
