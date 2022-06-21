#include<bits/stdc++.h>
#include "pdque.h"
using namespace std;

int main(){

    //priority deque i.e. deque in ascending order
    priority_deque dpq;

    //push 2, 5, 3, 7, 1
    dpq.push(2);
    dpq.push(5);
    dpq.push(3);
    dpq.push(7);
    dpq.push(6);
    dpq.push(1);

    //front
    cout<<"\nFront : "<<dpq.front();

    //rear
    cout<<"\nRear : "<<dpq.back();

    //pop back i.e. 1 should be popped
    dpq.pop_back();

    cout<<"\nRear after pop_back : "<<dpq.back();
    return 0;
}