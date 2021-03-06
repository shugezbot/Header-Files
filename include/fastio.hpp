/*2022.04.19 Update 
  Author: Shuger*/

#ifndef _FASTIO_HPP
#define _FASTIO_HPP

#include <stdio.h>

template <typename t> void in(t &a) {
    a=0;
    char c=getchar();
    int k=1;
    while(!_Isdigit(c) && c!='-') c=getchar();
    if(c=='-') k=-1,c=getchar();
    a=c-'0';
    while(_Isdigit(c=getchar())) a=a*10+c-'0';
    a*=k;
}

template <typename t> void _Out(t &a) {
    if(a==0) return ;
    _Out(a/10);
    putchar(a%10+'0');
}

#endif