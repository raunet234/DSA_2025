


vector<int> nextGreaterElement(vector<int> &arr){
    vector<int> result(n,-1);
    stack<int> st;
    //traverse from right to left
    for(int i=n-1;i>=0;i--){
        //remove smaller or equal elements
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }

        //if stack is not empty, top is the next greater
        if(!st.empty()){
            result[i] = st.top();
        }

        //push the current element
        st.push(arr[i]);
}
return result;

}
