#define BinNodePosi(T) BinNode<T>*
#define stature(p) ((p) ? (p)->height : -1)
// typedef enum{RB_RED, RB_BLACK} RBColor;

template <class T> 
struct BinNode{
    T data;
    BinNodePosi(T) parent;BinNodePosi(T) lc;BinNodePosi(T) rc;
    int height;
    
    BinNode():parent(NULL),lc(NULL),rc(NULL),height(0){}
    BinNode(T e, BinNodePosi(T) p = NULL, BinNodePosi(T) lc = NULL, BinNodePosi(T) rc = NULL, int h = 0):
        data(e), parent(p),lc(lc),rc(rc),height(h){}

    int size();
    BinNodePosi(T) insertAsLC(T const& e){return lc = new BinNode (e, this);}
    BinNodePosi(T) insertAsRC(T const& e){return rc = new BinNode (e, this);}
    BinNodePosi(T) succ();
    template <typename VST> void travLevel(VST&);
    template <typename VST> void travPre(VST&);
    template <typename VST> void travIn(VST&);
    template <typename VST> void travPost(VST&);

    bool operator< (BinNode const& bn){return data < bn.data;}
    bool operator<= (BinNode const& bn){return data <= bn.data;}
    bool operator> (BinNode const& bn){return data > bn.data;}
    bool operator>= (BinNode const& bn){return data >= bn.data;}
    bool operator== (BinNode const& bn){return data == bn.data;}
    bool operator!= (BinNode const& bn){return data != bn.data;}

};

#define IsRoot(x) (!(x).parent)
#define IsLChild(x) (!IsRoot(x) && (&(x) == (x).parent->lc))
#define IsRChild(x) (!IsRoot(x) && (&(x) == (x).parent->rc))
#define HasParent(x) (!IsRoot(x))
#define HasLChild(x) ((x).lc)
#define HasRChild(x) ((x).rc)
#define HasChild(x) (HasLChild(x) || HasRChild(x))
#define HasBothChild(x) (HasLChild(x) && HasRChild(x))
#define IsLeaf(x)(!HasChild(x))
#define sibling(x)\(IsLChild(*(x)) ? (x)->parent->rc : (x)->parent->lc )
#define uncle(x)\(IsLChild(*((x)->parent) ? (x)->parent->parent->rc : (x)->parent->parent->lc )
#define FromParetTo(x)\(IsRoot(*(p)) ? _root : (IsLChild(x)? (x).parent->rc : (x).parent->lc ))


