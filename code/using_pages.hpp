/*2022.04.18 Update 
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

#include<fastio.hpp>

#define MTX_MX 100

template <typename t> class Matrix{
    private:
        t Mtx[MTX_MX+5][MTX_MX+5];
    public:
        int n,m;
        void push(int i,int j,t a) {
            Mtx[i][j]=a;
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

Matrix operator * (Matrix a,Matrix b) {
    Matrix C;
    for(int i=1;i<=a.)
}

#endif