#if !defined(INTARRAY_H)
#define INTARRAY_H

class intArray{

private:
   int allocsize;
   int * data;

public:
   intArray(int _size);
   intArray(const intArray& other);
   void copy(const intArray&);
   ~intArray();
   void resize(int sz);
   int _size() const;
   intArray& operator=(const intArray& other);
   int& operator[](int i);
};

#endif
