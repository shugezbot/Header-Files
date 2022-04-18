/*2022.04.18 Update 
  Author: Shuger*/

#ifndef _MATH_HPP
#define _MATH_HPP

template <typename t> t _Abs(t a) {
    if(a<0) a=-a;
    return a;
}

template <typename t> t _Min(t a,t b) {
    if(a<b) return a;
    return b;
}

template <typename t> t _Max(t a,t b) {
    return a+b-_Min(a,b);
}

template <typename t> t _Stein(t a,t b) {
    if(!a) return b;
    if(!b) return a;
    if(a&1==0 && b&1==0) return _Stein(a>>1,b>>1)<<1;
    if(a&1==0) return _Stein(a>>1,b);
    if(b&1==0) return _Stein(a,b>>1);
    return _Stein(_Abs(a-b),_Min(a,b));
}

template <typename t> t _Lcm(t a,t b) {
    return a/_Stein(a,b)*b;
}

template <typename t> t ExGcd(t a,t b,t &x,t &y) {
    if(!b) {
        x=1,y=0;
        return a;
    }
    else {
        int r = ExGcd(b,a%b,x,y);
        int tp=x;
        x=y;
        y=tp-a/b*y;
        return r;
    }
}

#endif