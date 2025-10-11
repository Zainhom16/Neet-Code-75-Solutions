class MinStack
{
private:
  stack<int> st;
  stack<int> min_st;

public:
  MinStack()
  {
  }

  void push(int val)
  {
    st.push(val);
    if (min_st.empty() || val <= min_st.top())
    {
      min_st.push(val);
    }
    else
    {
      min_st.push(min_st.top());
    }
  }

  void pop()
  {
    if (st.empty())
      return;
    st.pop();
    min_st.pop();
  }

  int top()
  {
    if (st.empty())
    {
      return -1;
    }
    return st.top();
  }

  int getMin()
  {
    if (min_st.empty())
    {
      return -1;
    }
    return min_st.top();
  }
};
