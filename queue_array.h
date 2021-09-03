#ifndef QUEUE_ARRAY_
#define QUEUE_ARRAY_
#include <iostream>
#include <fstream>
using std::ofstream;
using std::cout;
using std::cin;
using std::endl;

template <class T>

class QueueArray
{
  public:
    QueueArray(int sizeOf)
    {
      size = sizeOf;
      Arr = new queue<T> [sizeOf];

    }
    ~QueueArray()
    {
      delete[] Arr;
    }
    
    int Asize(T Arr, sizeOf)
    {
      count = 0;
      for(int i = 0; i < sizeOf; i++)
      {
        count++;
      } 
      return count;
      //IN retrospect, this is kinda stupid. I could have just returned sizeOf. But I already wrote it.
    } 
    etype Dequeue();
    int Enqueue(const etype &item,const int index);
    int QAsize(); 
    int Qsize(int index) ;
    etype* Qstate(int index);

  private:
    int size;      //size of the array
    queue<etype>* array;   //the array of queues.  It must be an array (NO not a vector)
    int totalItems; //total number of items stored in the queues
};

#endif
/*
  Here is some example code for Program 1.  You don't have to use any of
  it, but if you are having trouble, it might get you started.
  The etype used through this is the template class your need to create
  in this class, etype means Example TYPE


#include <cstdlib>  //This is for the exit command.



 *  In the class below, it declares a "queue<etype>" array.     
 *  you don't need to use the STL queue (but you can), choose a data structure
 * that you think works.   If you choose to write you own queue class, then 
 * it has better follow all the requirements to a queue, to include the O time
 * minimum timing requirements of c++



template <class etype>
class QueueArray
{
  public:
    QueueArray(int);
    ~QueueArray();
    int Asize(); 
    etype Dequeue();
    int Enqueue(const etype &item,const int index);
    int QAsize(); 
    int Qsize(int index) ;
    etype* Qstate(int index);

  private:
    int size;      //size of the array
    queue<etype>* array;   //the array of queues.  It must be an array (NO not a vector)
    int totalItems; //total number of items stored in the queues
};

//Constructor for the queue array.  It sets the default size
//to 10, initializes the private variables size and totalItems
template <class etype>
QueueArray<etype>::QueueArray(int sz = 10):size(sz),totalItems(0)
{
  array = new queue<etype>[size];
  if( array == NULL)
  {
    cout << "Not enough memory to create the array" << endl;
    exit(-1);
  }
};

#endif


*/

