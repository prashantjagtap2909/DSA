To delete a particular word(value) from trie

bool isEmpty(TrieNode* root) 
{ 
    for (int i = 0; i < ALPHABET_SIZE; i++) 
        if (root->children[i]) 
            return false; 
    return true; 
    
} 

TrieNode* remove(TrieNode* root, string key, int i) 
{ 
    
    if (!root) 
        return NULL; 
  
    
    if (i == key.size()) { 
  
        
        if (root->isEndOfWord) 
            root->isEndOfWord = false; 
  
        
        if (isEmpty(root)) { 
            delete (root); 
            root = NULL; 
        } 
  
        return root;
    } 
  
    
    int index = key[i] - 'a'; 
    root->children[index] =  
          remove(root->children[index], key, i + 1); 
  
    
    if (isEmpty(root) && root->isEndOfWord == false) { 
        delete (root); 
        root = NULL; 
    } 
  
    return root; 
} 
 
