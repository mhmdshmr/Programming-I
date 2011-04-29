#include "intarray.h"

intArray::intArray(int _size){
//constructor
   allocsize = _size;
   data = new int[allocsize];
}

intArray::~intArray(){
//deconstructor (destruct)
	delete [] data;
}

void intArray::copy(const intArray& other)
{
  allocsize = other.allocsize;
  data = new int[allocsize];
  for (int i = 0; i < allocsize; i++)
    data[i] = other.data[i];
}

intArray::intArray(const intArray& other){
  copy(other);
}

void intArray::resize(int sz){
//resize
   intArray old = *this;
   delete [] data;
   data = new int[sz];

   for (int i = 0; i < sz and i < old.allocsize; i++){
	  data[i] = old.data[i];
   }
   allocsize = sz;
}

int intArray::_size() const {
//allocsize
   return allocsize;
}

intArray& intArray::operator = (const intArray& other){
//assignment
   if(this != &other)
	delete [] data;
   copy(other);   
   return *this;
}

int & intArray::operator[](int i){
   return data[i];
}

