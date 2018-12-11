#include <iostream>
using namespace std;

template <class T>
struct BinTreeNode{
    
	BinTreeNode* lc;
	BinTreeNode* rc;
	BinTreeNode* parent;
	T data;
	int height;

	BinTreeNode(){ data = 0; parent = NULL; lc = NULL; rc = NULL; height = 0;};
	BinTreeNode(T _data, BinTreeNode* p = NULL, BinTreeNode* _lc = NULL, BinTreeNode* _rc = NULL){ data = _data; parent = p; lc = _lc; rc = _rc; height = _lc||_rc ? 1:0;};

	int size();
	BinTreeNode* insertLC(T d){return lc = new BinTreeNode(d, this);}
	BinTreeNode* insertRC(T d){return rc = new BinTreeNode(d, this);}
	void modifyP(BinTreeNode p){parent = p;}
	void modifyLC(BinTreeNode _lc){lc = _lc;}
	void modifyRC(BinTreeNode _rc){rc = _rc;}
	BinTreeNode* succ();

	template <typename VST> void travLevel( VST& );
	template <typename VST> void travPre( VST& );
	template <typename VST> void travIn( VST& );
	template <typename VST> void travPost( VST& );

	bool operator< (BinTreeNode bn){ return data < bn.data; }
	bool operator<= (BinTreeNode bn){ return data <= bn.data; }
	bool operator> (BinTreeNode bn){ return data > bn.data; }
	bool operator>= (BinTreeNode bn){ return data >= bn.data; }
	bool operator== (BinTreeNode bn){ return data == bn.data; }
	bool operator!= (BinTreeNode bn){ return data != bn.data; }
};

template<class T>
BinTreeNode<T>* BinTreeNode<T>::succ(){
	BinTreeNode s = this;
	if(rc){
		s = rc;
		while(s.lc){
			s = s->lc; 
		}
	}else{
		while(s.parent && s == s.parent -> rc){
			s = s->parent;
		}
		s = s->parent;
	}
	return s;
}

template<class T>
class Bintree{
	private:
		BinTreeNode<T> * _root;
		int _size;
		virtual int updataHeight(BinTreeNode<T>* x);
		void updataHeightAbove(BinTreeNode<T>* x);
	public:
		Bintree():_size(0),_root(NULL){};
		// ~Bintree(){if(0 < _size) remove(_root);};
		int size(){return _size;};
		bool isEmpty(){return !_root;};
		BinTreeNode<T>* root(){return _root;};
		BinTreeNode<T>* insertRoot(T e){_size = 1;return _root = new BinTreeNode<T>(e);};
		BinTreeNode<T>* insertLC(BinTreeNode<T>* x, T e){_size++; x->insertLC(e); updataHeightAbove(x); return x->lc;};
		BinTreeNode<T>* insertRC(BinTreeNode<T>* x, T e){_size++; x->insertRC(e); updataHeightAbove(x); return x->rc;};
		BinTreeNode<T>* attachLC(BinTreeNode<T>* x, Bintree<T> t);
		BinTreeNode<T>* attachRC(BinTreeNode<T>* x, Bintree<T> t);

		int remove(BinTreeNode<T>* x);
		Bintree<T>* secede(BinTreeNode<T>* x);

		// 各种遍历
		template<class VST>void travPre(VST& visit){if(_root) _root->travPre(visit);}
		template<class VST>void travIn(VST& visit){if(_root) _root->travIn(visit);}
		template<class VST>void travPost(VST& visit){if(_root) _root->travPost(visit);}
		template<class VST>void travLevel(VST& visit){if(_root) _root->travLevel(visit);}

		bool operator< (Bintree<T> t){return _root && t._root && lt(_root, t._root);}
		bool operator== (Bintree<T> t){return _root && t._root && (_root == t._root);}

		void display();

};

template<class T>
int Bintree<T>::updataHeight(BinTreeNode<T>* x){
	// return x->height = 1 + max( stature(x -> lc), stature(x -> rc));
	return 1;
}

template<class T>
void Bintree<T>:: updataHeightAbove(BinTreeNode<T>* x){
	while(x){updataHeight(x);x=x->sortP();}
}

template<class T>
void Bintree<T>::display(){
	if(!_root) return;
	cout << _root->data << endl;
	
	if(_root->lc){
		cout << "/   \\" ;
		cout << endl ;
		cout << _root->lc->data << endl;
	}


}

int main()
{
	Bintree<int> testTree;
	testTree.insertRoot(100);
	testTree.display();
	BinTreeNode<int>* n;
	n = testTree.root();
	// testTree.insertRC(n,67);

	for(int i = 0; i < 10; i++){
		n->insertLC(i);
		n = n->lc;
	}
	// testTree->insertLC(1);
	testTree.display();

    return 0;
}
