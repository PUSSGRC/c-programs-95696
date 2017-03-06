#include<iostream>
using namespace std;
class cmplx
{
    float re,ie;
public:
    void setdata(float r,float i)
  {
    re=r;
    ie=i;
  }
    void show()
    {
        cout<<re<<" "<<ie;
    }
    cmplx getdata(cmplx g)
    {
        cmplx l;
        l.re=re+g.re;
        l.ie=ie+g.ie;
        return(l);
    }
};
    int main()
    {
        cmplx c;
        c.setdata(3.4,5.6);
        cmplx d;
        d.setdata(1.2,7.8);
        cmplx e;
        e=c.getdata(d);
        e.show();
    }
