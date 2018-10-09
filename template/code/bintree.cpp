#include <iostream>
using namespace std;

template <class T>
class BinTreeNode{
    private:
        BinTreeNode left;
        BinTreeNode right;
        BinTreeNode partent;
        T data;
    public:
        BinTreeNode(T _data){ data = _data};
		void addLC(BinTreeNode &lc){left = lc；return 0;}
		void addRC(BinTreeNode &rc){right = rc；return 0;}
		void addP(BinTreeNode &p){partent = p；return 0;}
};

// template<class T>
class bintree{
	private:
		BinTreeNode _root；
		int _size;
	public:
		bintree(){_root = NULL; _size = 0;}
		~bintree();
		int size(){return _size;}
		bool isEmpty(){return !_root}
		
};

bintree::bintree(){
	
}

bintree::~bintree(){

}



int main()
{
    /* code */
    return 0;
}
