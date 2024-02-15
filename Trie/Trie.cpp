#include <bits/stdc++.h>
using namespace std;

class Trie{
    public:
        char data;
        Trie* children[26];
        bool isTerminal;

    Trie(char data){
        this->data = data;
        for(int i=0;i<26;i++){
            this->children[i] = NULL; 
        }
        this->isTerminal = false;

    }
};

void insert(Trie* &root,string word){
    cout << "received word for insertion : " << word << endl;
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }
    char ch = word[0];
    int index = ch - 'a';
    Trie* newChild;
    if(root->children[index] != NULL){
        newChild = root->children[index];
    }
    else{
        newChild = new Trie(word[0]);
        root->children[index] = newChild;
    }
    insert(newChild,word.substr(1));
};

bool search(Trie* &root,string word){
    cout << "received string for searching : " << word << endl; 
    if(word.length() == 0){
        return root->isTerminal;
    }
    char ch = word[0];
    int index = ch - 'a';
    Trie* child;
    if(root->children[index] != NULL){
        child = root->children[index];
    }
    else{
        return false;
    }

    return search(child,word.substr(1));
}

void deleteWord(Trie* root,string word){
    if(word.length() == 0){
        root->isTerminal = false;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    Trie* child;
    if(root->children[index] != NULL){
        child = root->children[index];
    }
    else{
        return;
    }

    deleteWord(child,word.substr(1));
}

int main(){
    Trie* trie = new Trie('_');
    insert(trie,"sayan");
    insert(trie,"sayani");
    insert(trie,"samrat");
    insert(trie,"tapan");
    if((search(trie,"sayani"))){
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }

    deleteWord(trie,"sayani");

    if((search(trie,"sayani"))){
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }

    return 0;
}
