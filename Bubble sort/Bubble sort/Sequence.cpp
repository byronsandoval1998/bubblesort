#include "Sequence.h"
  template <typename Elem>
typename NodeList<Elem>::Iterator
NodeSequence<Elem>::atIndex(int i) 
{
   typename NodeList<Elem>::Iterator p = this->begin();                                                        
   for(int j = 0; j < i; ++j) ++p;           
   return p;                             
}

  template <typename Elem>
int
NodeSequence<Elem>::indexOf(typename NodeList<Elem>::Iterator &i) 
{
   int j = 0;
   typename NodeList<Elem>::Iterator q = this->begin();
   while(q != i)
   {
           ++q; 
           ++j;        
   }
   
   return j;                              
                                
}
