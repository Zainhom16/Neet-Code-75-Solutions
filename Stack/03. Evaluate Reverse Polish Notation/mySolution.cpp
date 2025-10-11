// Time Complexity: O(n) because of looping through all tokens
// Space Complexity: O(n) because of stack usage

class Solution
{
public:
  int evalRPN(vector<string> &tokens)
  {
    stack<int> s;
    for (string st : tokens)
    {
      int first, second = 0;
      if (st != "+" && st != "-" && st != "*" && st != "/")
      {
        s.push(stoi(st));
      }
      else
      {
        if (st == "+")
        {
          first = s.top();
          s.pop();
          second = s.top();
          s.pop();
          s.push(second + first);
        }

        else if (st == "-")
        {
          first = s.top();
          s.pop();
          second = s.top();
          s.pop();
          s.push(second - first);
        }
        else if (st == "*")
        {
          first = s.top();
          s.pop();
          second = s.top();
          s.pop();
          s.push(second * first);
        }
        else
        {
          first = s.top();
          s.pop();
          second = s.top();
          s.pop();
          s.push(second / first);
        }
      }
    }
    return s.top();
  }
};
