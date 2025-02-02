// https://www.hackerrank.com/challenges/attribute-parser/problem
#include <iostream>
using namespace std;

class Attribute {
    public:
    string name;
    string value;
    Attribute *next;
    
    Attribute(string name, string value) {
        this -> name = name;
        this -> value = value;
        this -> next = nullptr;
    }
};

class Tag {
    public:
    string name;
    Attribute *attr;
    Tag *child;
    Tag *parent;
    Tag *next;
    
    Tag() {
        name = "";
        attr = nullptr;
        child = nullptr;
        parent = nullptr;
        next = nullptr;
    }
    
    Tag(string name) {
        this -> name = name;
        attr = nullptr;
        child = nullptr;
        parent = nullptr;
        next = nullptr;
    }
    
    Tag *addChild(string tagName) {
        Tag *temp = child;
        Tag *created = new Tag(tagName);
        created -> parent = this;
        if(temp != nullptr) {
            while(temp -> next != nullptr) {
                temp = temp -> next;
            }
            temp -> next = created;
        }
        else {
            child = created;
        }
        return created;
    }
    
    void addAttr(string n, string v) {
        Attribute *temp = new Attribute(n, v);
        Attribute *leaf = attr;
        if(leaf == nullptr) {
            attr = temp;
        }
        else {
            while(leaf -> next != nullptr) {
                leaf = leaf -> next;
            }
            leaf -> next = temp;
        }
    }
    
    void print(Tag *link) {
        if(link == nullptr) {
            return;
        }
        cout << link -> name << endl;
        Attribute *temp = link -> attr;
        while(temp != nullptr) {
            cout << "Attribute: " << temp -> name << "\nValue: " << temp -> value << endl;
            temp = temp -> next;
        }
        print(link -> child);
        print(link -> next);
    }
    
    Tag *findTag(string s) {
        Tag *temp = this -> child;
        while(temp != nullptr && s != temp -> name) {
            temp = temp -> next;
        }
        return temp;
    }
    Attribute *findAttr(string s) {
        Attribute *temp = attr;
        while(temp != nullptr) {
            if(temp -> name == s) {
                break;
            }
            temp = temp -> next;
        }
        return temp;
    }
};

int main()
{
    int n, q;
    cin >> n >> q;
    
    cin.ignore();
    Tag root;
    Tag *curr = &root;
    for(int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        int len = s.length();
        
        if(s[1] != '/') {
            string tagName = "";
            int j = 1;
            while(s[j] != ' ' && s[j] != '>') {
                tagName += s[j];
                j++;
            }
            curr = curr -> addChild(s.substr(1, j - 1));
            
            // if attributes
            if(j != len - 1) {
                j++;
                
                // traversing all attributes and adding
                while(j != len) {
                    string attrName = "";
                    for(; s[j] != ' '; j++) {
                        attrName += s[j];
                    }
                    
                    string value = "";
                    j += 4;
                    for(; s[j] != '"'; j++) {
                        value += s[j];
                    }
                    curr -> addAttr(attrName, value);
                    j += 2;
                }
            }
        }
        else {
            curr = curr -> parent;   
        }
    }
    
    for(int i = 0; i < q; i++) {
        string s;
        getline(cin, s);
        int len = s.length();
        
        curr = &root;
        int ind = 0;
        string temp = "";
        bool tagFound = true;
        while(ind < len) {
            if(s[ind] == '.' || s[ind] == '~') {
                curr = curr -> findTag(temp);
                if(curr == nullptr) {
                    tagFound = false;
                    cout << "Not Found!" << endl;
                    break;
                }
                temp = "";
            }
            else {
                temp += s[ind];
            }
            ind++;
        }
        if(tagFound) {
            Attribute *ans = curr -> findAttr(temp);
            if(ans != nullptr) {
                cout << ans -> value << endl;
            }
            else {
                cout << "Not Found!" << endl;
            }
        }
    }
    return 0;
}