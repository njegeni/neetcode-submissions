class Solution {
public:
    bool isValid(string s) {
        stack<char> order;
        map<char, char> match = {{')', '('}, {']', '['}, {'}', '{'}};
        for(char p : s){
            if (p == '(' || p == '[' || p == '{'){
                order.push(p);
            } else {
                if(order.empty()){
                    return false;
                }
                if(order.top() != match[p]){
                    return false;
                }
                order.pop();
            }
        }
        return order.empty();
    }
};
