class MinStack {
public:
    /** initialize your data structure here. */
     vector<int>voriginal;  //line1
    vector<int>vmin;  //line2
    MinStack() {
       // agar yahan declare kr rhe #line1 & #line2 ko to error aa rha. Why?
    }
    
    void push(int x) {
        voriginal.push_back(x);
        if(vmin.size()==0)
            vmin.push_back(x);
        else{
            int min=vmin.back();
            vmin.push_back(x<min?x:min);
        }
            
            
    }
    
    void pop() {
        voriginal.pop_back();
        vmin.pop_back();
    }
    
    int top() {
        return voriginal.back();
    }
    
    int getMin() {
        return vmin.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */