#include<iostream>
using namespace std;

#include "BinNode.h"

template<class T>
class Bintree{
protected:
//    int _size;
//    BinNodePosi(T) _root;
//    virtual int updateHeight( BinNodePosi(T) x );
//    void updateHeightAbove( BinNodePosi(T) x );
public:
//    Bintree() : _size(0), _root(NULL){}
//    ~Bintree() {if(0 < _size) remove(_root);}
//    int size() const {return _size;}
//    bool empty() const {return !_root;}
//    BinNodePosi(T) root() const {return _root;}
//    BinNodePosi(T) insertAsRoot(T const& e){_size = 1; return _root = new BinNode<T>(e); }
//    BinNodePosi(T) insertAsLc(BinNodePosi(T) x,T const& e){_size++; x->insertAsLC(e); updateHeightAbove(x); return x->lc; }
//    BinNodePosi(T) insertAsRc(BinNodePosi(T) x,T const& e){_size++; x->insertAsRC(e); updateHeightAbove(x); return x->rc; }
    // BinNodePosi(T) attachAsLC(BinNodePosi(T) x,BinTree<T>* &t );
    // BinNodePosi(T) attachAsRC(BinNodePosi(T) x,BinTree<T>* &t );
//    int remove(BinNodePosi(T) x);
//    Bintree<T>* secede (BinNodePosi(T) x);
//    template<typename VST>
//    void travLevel(VST& visit){if(_root) _root->travLevel(visit);} 
//    template<typename VST>
//    void travPre(VST& visit){if(_root) _root->travPre(visit);} 
//    template<typename VST>
//    void travIn(VST& visit){if(_root) _root->travIn(visit);} 
//    template<typename VST>
//    void travPost(VST& visit){if(_root) _root->travPost(visit);} 

    // bool operator<(BinTree<T> const& t ){return _root && t._root}


};

//template<class T>
//int Bintree<T>::updateHeight( BinNodePosi(T) x ){
//    return x->height =  1 + max(stature(x->lc),stature(x->rc));
//}
//
//template<class T>
//void Bintree<T>::updateHeightAbove( BinNodePosi(T) x ){
//    while(x){
//        updateHeight(x);
//        x = x->parent;
//    }
//}
//
//template<class T>
//int Bintree<T>::remove(BinNodePosi(T) x){
//    FromParentTo(*x) = NULL;
//    updateHeightAbove(x->parent);
//    int n = removeAt(x);
//    _size -= n;
//	return n;
//}
//
//template<class T>
//static int removeAt(BinNodePosi(T) x){
//    if(!x) return 0;
//    int n = 1 + removeAt(x->lc) + removeAt(x->rc);
//    release(x->data);
//    release(x);
//	return n;
//}

int main()
{
//    Bintree<int> testTree;
//    testTree.insertAsRoot(100);
//    cout << testTree.root() << endl;
	cout << "WHAT FUCK!!!!!!!!" << endl;
    return 0;
}
