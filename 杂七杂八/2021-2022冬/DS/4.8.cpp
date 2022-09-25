#include <iostream>
using namespace std;

template<class ElemType>
class LinkList{
protected:
    Node<ElemType> *head;
    int length;
public:
    LinkList();
    ~LinkList();
    Status GetElem(int i,ElemType &e) const;
    Status SetElem(int i,const ElemType &e);
    Status DeleteElem(int i,ElemType &e);
}
template<class ElemType>
LinkList<ElemType>::LinkList(){
    head=new Node<ElemType>;
    assert(head);
    length=0;
}

struct PolyItem{
    double coef;
    int expn;
    PolyItem();
    PolyItem(double cf,int en);
}

class Polynomial{
protected:
    LinkList<PolyItem> polyList;
public:
    Polynomial(){};
    ~Polynomial(){};
    int Length() const;
    bool IsZero() const;
    void SetZero();
    void Display();
    void InsItem(const PolyItem &item);
   
   
    void Derivative();
    
};

void Polynomial::Derivative(){
    int i;
    Status status;
    PolyItem it;
    for(i=1;i<=Length();i++){
        status=polyList.GetElem(i,it);
    }
    if(it.expn==0)
        polyList.DeleteElem(i,it);
    else{
        it.coef=it.coef*it.expn;
        it.expn=it.expn-1;
        polyList.SetElem(i,it);
    }
    return; 
}


int main(){



    return 0;
}