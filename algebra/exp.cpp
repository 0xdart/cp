#include<bits/stdc++.h>
using namespace std;
template<typename T>
T power(T x, T y , const T m){
    x = x%m;
    T result = 1;
    for(;y>0;x = x*x%m,y>>=1)  if(y&1) result = result * x % m;
    return result;
}
int main(){
    cout<<power<int64_t>(2,2,10);
}

