#include "NodeList.cpp"
 template <typename Elem>
class NodeSequence : public NodeList<Elem>
{
   public: 
       typename NodeList<Elem>::Iterator atIndex(int i) ;
        int indexOf(typename NodeList<Elem>::Iterator &i);
};
