string superReducedString(string s) {
    string new_s = "";
    stack<char> st;
    
    for(auto x : s){
        if(!st.empty() && st.top() == x ){
            st.pop();
        }
        else{
            st.push(x);
        }
    }
    while(!st.empty()){
        new_s = st.top() + new_s;
        st.pop();
        
    }
    if(new_s.size() != 0){
            return new_s;
    }
    return "Empty String";
}
