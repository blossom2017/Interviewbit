
stack<int > st;
stack<int >minst;

int minele;
//st.clear();
//minst.clear();
MinStack::MinStack() {
minele=INT_MAX;
while(!st.empty())
{
    st.pop();
}
while(!minst.empty())
{
    minst.pop();
}
    
}

void MinStack::push(int x) {
    st.push(x);
    if(x<minele){minst.push(x);minele=x;}
    
}

void MinStack::pop() {
   
    if(!st.empty()){ int ele=st.top();st.pop();
    if(!minst.empty()&&ele==minst.top()){minst.pop();if(!minst.empty())minele=minst.top();else minele=INT_MAX;}}
    
}

int MinStack::top() {
    if(!st.empty())return st.top();
    else return -1;
}

int MinStack::getMin() {
   if(!st.empty()) return minele;
   else return -1;
}

