#include<deque>
#include<vector>
using namespace std;

class priority_deque{
    deque<int> dq;
    public:
    void push(int value);
    void pop_back();
    void pop_front();
    int front();
    int back();
    int size();
    bool empty();
};

void priority_deque::push(int value){
    if(dq.empty() || value > dq.front()){
        dq.push_front(value);
    }
    else if(value < dq.back()){
        dq.push_back(value);
    }
    else{
        vector<int> temp;
        while(!dq.empty() && dq.front() > value){
            temp.push_back(dq.front());
            dq.pop_front();
        }
        dq.push_front(value);
        for(int i = temp.size()-1; i >= 0; i--){
            dq.push_front(temp[i]);
        }
    }
}

void priority_deque::pop_back(){
    dq.pop_back();
}

void priority_deque::pop_front(){
    dq.pop_front();
}

int priority_deque::front(){
    return dq.front();
}

int priority_deque::back(){
    return dq.back();
}

int priority_deque::size(){
    return dq.size();
}

bool priority_deque::empty(){
    return dq.empty();
}