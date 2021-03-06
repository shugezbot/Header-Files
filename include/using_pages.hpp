/*2022.04.19 Update 
  Author: Shuger*/

#ifndef _USING_PAGES_HPP
#define _USING_PAGES_HPP

bool _Isdigit(char c) {
    return (c<='9' && c>='0');
}

bool _BigLt(char c) {
    return (c<='Z' && c>='A');
}

bool _SmlLt(char c) {
    return (c<='z' && c>='a');
}

bool _Isletter(char c) {
    return (_BigLt(c) || _SmlLt(c));
}

bool _Space(char c) {
    return c==32;
}

bool _VChar(char c) {
    return ((_Isletter(c)) || _Isdigit(c));
}

#include "fastio.hpp"

#define MTX_MX 100

template <typename t> struct Matrix{
//    private:
        t Mtx[MTX_MX+5][MTX_MX+5];
//    public:
        int n,m;
        void clean(t k) {
            for(int i=1;i<=n;++i) {
                for(int j=1;j<=m;++j) {
                    Mtk[i][j]=k;
                }
            }
        }
        void push(int i,int j,t a) {
            Mtx[i][j]=a;
        }
        void add(int i,int j,t a) {
            Mtx[i][j]+=a;
        }
        t _Nump(int i,int j) {
            return Mtx[i][j];
        } 
        void out() {
            for(int i=1;i<=n;++i) {
                for(int j=1;j<=m;++j) {
                    _Out(Mtx[i][j]);
                    putchar(' ');
                }
                putchar(10);
            }
        }
};

//I'm very sorry that due to my mistake, matrix can't give full play to its maximum performance.

template <typename t> Matrix<t> operator * (Matrix<t> a,Matrix<t> b) {
    Matrix<t> C;
    for(int i=1;i<=a.n;++i) {
        for(int j=1;j<=b.m;++j) {
            C.push(i,j,0);
            for(int k=1;k<=a.n;++k) {
                C.add(i,j,a._Nump(i,k)+b._Nump(k,j));
            }
        }
    }
}

template <typename t,typename t2> Matrix<t> _PowMtx(Matrix<t> a,t2 b) {
    Matrix<t> C;
    C.clean(1);
    while(b) {
        if(b&1) C*=a;
        a*=a;
        b>>=1;
    }
    return C;
}

#endif