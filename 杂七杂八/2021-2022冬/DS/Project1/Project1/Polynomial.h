#pragma once
#include "LinkList.h"
typedef int Status;
using namespace std;
struct PolyItem {
    double coef;
    int expn;
    PolyItem();
    PolyItem(double cf, int en);
    friend ostream& operator<<(ostream& out,PolyItem& p) {
        out << p.coef << " " << p.expn << " ";
        return out;
    }
};

PolyItem::PolyItem() {
    coef = expn = 0;
}

PolyItem::PolyItem(double cf, int en) {
    coef = cf;
    expn = en;
}

class Polynomial {
protected:
    LinkList<PolyItem> polyList;
public:
    Polynomial() {};
    ~Polynomial() {};
    int Length() const;
    //bool IsZero() const;
    //void SetZero();
    void Display();
    void InsItem(const PolyItem& item);


    void Derivative();

};

int Polynomial::Length() const {
    return polyList.length;
}

void Polynomial::Derivative() {
    int i;
    Status status;
    PolyItem it;
    for (i = 1; i <= Length(); i++) {
        status = polyList.GetElem(i, it);
    }
    if (it.expn == 0)
        polyList.DeleteElem(i, it);
    else {
        it.coef = it.coef * it.expn;
        it.expn = it.expn - 1;
        polyList.SetElem(i, it);
    }
    return;
}

void Polynomial::InsItem(const PolyItem& item) {
    polyList.SetElem(Length()-1,item);
}

void Polynomial::Display() {
    polyList.show();
}