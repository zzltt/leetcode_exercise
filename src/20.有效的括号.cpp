/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
#include<iostream>
#include<stack>
#include<vector>


using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> store;
        auto strSize = s.size();
        if(strSize%2 !=0) return false;
        for(auto tmpChar:s)
        {
            char popChar = ' ';
            switch (tmpChar)
            {
            //如果是(,[,{,就压入栈中
            case '(':
            case '[':
            case '{':
                store.push(tmpChar);
                break;
            case ')':
                //注意栈为空的情况
                if (store.empty())
                {
                    return false;
                }
                popChar = store.top();
                store.pop();
                if (popChar != '(')
                {
                    return false;
                }
                break;
            case ']':
                //注意栈为空的情况
                if (store.empty())
                {
                    return false;
                }
                popChar = store.top();
                store.pop();
                if (popChar != '[')
                {
                    return false;
                }
                break;
            case '}':
                //注意栈为空的情况
                if (store.empty())
                {
                    return false;
                }
                popChar = store.top();
                store.pop();
                if (popChar != '{')
                {
                    return false;
                }
                break;
            default:
                return false;
                break;
            }
        }
        if(store.empty())
        {
            return true;
        }
        else
            return false;
    }
};
// @lc code=end

