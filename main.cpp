#include <iostream>

using namespace std;

template<class T>
class singly_LinkedList {

private:
    class node {
      public:
            T value;
            node* next;

          node()
          {
            value = T();
            next = nullptr;
         }

      }; // end class node.


  // declaration of head pointer
  private:
       node* head = nullptr;
       node *tail = nullptr;

  // start Push_front function
  public:
      // destructor declaration.
      ~singly_LinkedList()
      {
          Clear();

      } // end destructor.

      void Push_front(T val)
      {

          node* t = new node();
          t->value = val;
          t->next = head;
          if(!head) tail = head = t;
          head = t;

      } // end Push_front function.

      //precondition:linked list has at least one node.
      T& Front() {
         return head->value;
      }
      // postcondition: return the value of first node.

      // precondition: linked list has at least one node.
      T& Back() {
        return tail->value;
      } // postcondition: return the value of last node.


    //precondition:linked list has at least one node.
      void Pop_front() {

          node* t = head;
          head = head->next;
          if(!head) tail = nullptr;
          delete t;
      } // postcondition: remove one node from the beginning linkedlist

        void Clear() {
            node *curent = head;
            while(curent != nullptr) {
                node* t = curent->next;
                delete curent;
                curent = t;
            }
           tail = head = nullptr;

        } //postcondition: remove all nodes from linked list


       // declaration Push_back function
       void Push_back(T value) {

           node *t = new node();
           t->value = value;
           t->next = nullptr;
           if(!tail)
           {
               tail = head = t;
           }
           else{

                tail->next = t;
                tail = t;
           }
       } // postcondition: push one node at ending of linked_list


};


int main()
{

  singly_LinkedList<int> ls;




    return 0;
}


