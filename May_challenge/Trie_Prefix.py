
class Node:
    def __init__(self,val):
        self.value= val
        self.children = {}
        self.end = False




class Trie:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.root = Node(None)
        

    def insert(self, word: str) -> None:
        """
        Inserts a word into the trie.
        """
        parent = self.root
        for i,ch in enumerate(word):
            if ch not in parent.children:
                parent.children[ch] = Node(ch)
            parent = parent.children[ch] ## new parent
            if (i == len(word)-1):
                parent.end = True;

    def search(self, word: str) -> bool:
        """
        Returns if the word is in the trie.
        """
        parent  = self.root ## parent is the node
        
        for i,letter in enumerate(word):
            if letter not in parent.children:
                return False
            parent = parent.children[letter]
        return parent.end
            
        
        

    def startsWith(self, prefix: str) -> bool:
        """
        Returns if there is any word in the trie that starts with the given prefix.
        """
        parent = self.root
        for i, ch in enumerate(prefix):
            if ch not in parent.children:
                return False
            parent = parent.children[ch]
            
            if i==len(prefix)-1:
                return True
        # return True
            



# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)
