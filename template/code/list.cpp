#include<iostream>
using namespace std;


template<class T>
struct Node
{
    T data;
    Node* succ;
    Node* pred;
};


template<class T>
class List{
    private:
        Node tail;
        Node head;
        int _size;
    public:
        List();
        List(List &l);
        ~List();
        int size(){return _size};
        bool isEmpty(){return _size == 0};
        Node insert(T data);
        T deleteNode(int sit);
        T sort(int sit);
        
};

template<class T>
List<T>::List(){
    tail = NULL;
    head = NULL;
    _size = 0;
}

template<class T>
List<T>::~List(){

}


int main()
{
    
    return 0;
}
