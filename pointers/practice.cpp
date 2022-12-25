#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
/*
Dereferencing is getting at the pointed value. Pointer variables are useful for walking the contents of a linked list data structure, using a dynamic jump table to subroutines, and passing arguments by address (so only an address is passed) rather than by value (where the entire data structure is copied)
*/

int main(){
    int a=10;
    int *p;
    p=&a;
    cout<<a<<" "<<p<<"\n";
    //now the dereferencing of the pointers
    cout<<a<<" "<<*p<<"\n";
    return 0;
}
