class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ans=0;
        for(auto& c : tokens){
            if(c == "+" || c == "-" || c == "*" || c == "/"){
                int right = st.top(); st.pop();
                int left = st.top(); st.pop();
                
                
                if(c == "+") {
                    st.push(left + right);
                }else if(c == "-"){
                    st.push(left - right);
                }else if(c == "*"){
                    st.push(left * right);
                }else{
                    if(right!=0){
                        st.push(left / right);

                    }else{
                        st.push(0);
                    }
                }
            
            }else{
                st.push(stoi(c));
            }
        }

        return st.top();
    }
};
