#include <bits/stdc++.h>

using namespace std;

class TrieNode{
  public:
    bool is_end;
    vector <TrieNode*> child(26);
  TrieNode()
    {
        is_end=false;
        for(int i=0;i<child.size();i++)
          {
                child[i] = NULL;
          }
    }
  ~TrieNode()
    {
      is_end = false;
      for(int i=0;i<child.size();i++)
        {
          delete child[i];
          child[i] = nullptr;
        }
    }
};




int main()
{
    
}
