class MinStack {
    int s[30000];
    int mins[30000];
    int topIdx = -1;
    int minimum = INT_MAX;
public:
    MinStack() {  
    }
    
    void push(int val) {
        if(topIdx == 30000){
            return;
        }
        topIdx++;
        s[topIdx] = val;
        if(topIdx == 0){
            mins[topIdx] = val;
        }
        else{
            mins[topIdx] = min(mins[topIdx-1] , val);
        }
    }
    
    void pop() {
        topIdx--;
    }
    
    int top() {
        return s[topIdx];
    }
    
    int getMin(){
        return mins[topIdx];
    }
};
