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

class Trie{
  public :
    TrieNode* root;
  Trie()
  {
    root = new TrieNode();
  }
  ~Trie(){
    delete root;
    root = nullptr;
  }
  void insert(string &s)
  {   TrieNode* curr = root;
     for(int i=0;i<s.size();i++)
     {
         if(curr->child[s[i]-'a']==NULL)
         {
           curr->child[s[i]-'a']= new TrieNode();
         }
       curr = curr->child[s[i]-'a'];
     }
     curr->is_end=true;
  }
};



int main()
{
    
}
