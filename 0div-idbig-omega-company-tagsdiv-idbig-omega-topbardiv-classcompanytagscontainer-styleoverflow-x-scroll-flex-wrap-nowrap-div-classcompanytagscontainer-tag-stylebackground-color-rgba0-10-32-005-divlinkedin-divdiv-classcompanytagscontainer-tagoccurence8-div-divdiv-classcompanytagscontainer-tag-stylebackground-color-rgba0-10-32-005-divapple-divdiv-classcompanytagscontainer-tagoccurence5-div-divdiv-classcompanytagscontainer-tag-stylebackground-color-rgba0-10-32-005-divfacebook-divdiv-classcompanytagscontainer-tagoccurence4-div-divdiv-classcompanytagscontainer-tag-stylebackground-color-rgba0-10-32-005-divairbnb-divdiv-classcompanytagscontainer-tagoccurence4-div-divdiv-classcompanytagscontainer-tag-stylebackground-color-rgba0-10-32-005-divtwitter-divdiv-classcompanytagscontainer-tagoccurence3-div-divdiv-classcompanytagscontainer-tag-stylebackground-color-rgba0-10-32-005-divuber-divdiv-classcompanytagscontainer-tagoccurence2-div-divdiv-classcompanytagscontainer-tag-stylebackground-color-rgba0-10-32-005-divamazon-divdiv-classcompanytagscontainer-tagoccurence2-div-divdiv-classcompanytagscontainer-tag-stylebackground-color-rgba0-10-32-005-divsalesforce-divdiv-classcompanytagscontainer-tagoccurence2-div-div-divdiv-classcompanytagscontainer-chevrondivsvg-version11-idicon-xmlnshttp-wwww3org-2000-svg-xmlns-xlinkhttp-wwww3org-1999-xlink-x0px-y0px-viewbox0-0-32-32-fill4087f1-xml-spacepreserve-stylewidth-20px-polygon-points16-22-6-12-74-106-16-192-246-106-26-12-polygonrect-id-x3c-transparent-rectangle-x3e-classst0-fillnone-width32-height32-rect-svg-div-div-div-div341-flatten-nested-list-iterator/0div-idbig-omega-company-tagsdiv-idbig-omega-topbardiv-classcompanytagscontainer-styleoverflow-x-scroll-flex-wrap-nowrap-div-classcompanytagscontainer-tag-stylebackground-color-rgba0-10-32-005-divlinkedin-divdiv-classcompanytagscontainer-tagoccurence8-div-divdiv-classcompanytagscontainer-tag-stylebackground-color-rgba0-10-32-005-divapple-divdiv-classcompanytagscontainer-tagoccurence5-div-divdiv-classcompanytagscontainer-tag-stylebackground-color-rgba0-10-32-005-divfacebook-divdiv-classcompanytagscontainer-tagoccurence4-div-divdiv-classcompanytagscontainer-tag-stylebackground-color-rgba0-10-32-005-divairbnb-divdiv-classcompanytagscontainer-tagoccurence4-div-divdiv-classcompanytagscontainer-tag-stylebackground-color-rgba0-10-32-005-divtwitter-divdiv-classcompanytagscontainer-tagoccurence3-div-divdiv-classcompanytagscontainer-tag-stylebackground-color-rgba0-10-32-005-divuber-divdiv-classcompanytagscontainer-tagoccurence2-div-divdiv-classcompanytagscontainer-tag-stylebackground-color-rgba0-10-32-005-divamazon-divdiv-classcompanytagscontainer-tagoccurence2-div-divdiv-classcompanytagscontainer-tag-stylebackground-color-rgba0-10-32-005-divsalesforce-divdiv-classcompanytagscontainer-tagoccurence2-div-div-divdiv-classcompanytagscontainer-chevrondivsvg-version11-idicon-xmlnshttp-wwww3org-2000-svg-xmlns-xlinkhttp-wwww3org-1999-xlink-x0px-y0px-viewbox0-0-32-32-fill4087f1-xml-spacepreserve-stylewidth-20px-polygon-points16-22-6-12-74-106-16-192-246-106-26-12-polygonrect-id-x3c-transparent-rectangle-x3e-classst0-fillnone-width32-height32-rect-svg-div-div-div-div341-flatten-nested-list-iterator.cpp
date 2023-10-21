#include <stack>
#include <vector>

class NestedIterator {
public:
    stack<NestedInteger> stack;

    NestedIterator(vector<NestedInteger>& nestedList) {
        for (int i = nestedList.size() - 1; i >= 0; --i) {
            stack.push(nestedList[i]);
        }
    }

    int next() {
        int result = stack.top().getInteger();
        stack.pop();
        return result;
    }

    bool hasNext() {
        while (!stack.empty()) {
            NestedInteger top = stack.top();
            if (top.isInteger()) {
                return true;
            }
            stack.pop();
            vector<NestedInteger>& nestedList = top.getList();
            for (int i = nestedList.size() - 1; i >= 0; --i) {
                stack.push(nestedList[i]);
            }
        }
        return false;
    }
};