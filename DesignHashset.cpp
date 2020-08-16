class MyHashSet {
public:
    /** Initialize your data structure here. */
    int ar[1000001]{-1};
    MyHashSet() {
        //memset(ar,-1,sizeof(ar));
    }
    
    void add(int key) {
        ar[key]=1;
    }
    
    void remove(int key) {
        ar[key]=-1;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return ar[key]==1;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
