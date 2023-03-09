class MyHashMap {
public:
    /** Initialize your data structure here. */
    int um[1000001];
    MyHashMap() {
        memset(um,-1,sizeof(um));
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        um[key]=value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return um[key];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        um[key]=-1;
    }
};
//-------------------------------Another--------------------------------------------------
class MyHashMap {
public:
    /** Initialize your data structure here. */
    vector<list<pair<int,int>>> um;
    int size = 769; // Generally a large prime number
	
	MyHashMap() {
        um.resize(size);
    }
	
	int getInd(int key)
    {
        return key%size;
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        int ind = getInd(key);
        auto& list = um[ind];
        for(auto &i:list)
        {
            if(i.first==key)
            {
               // cout<<"hi"<<endl;
                i.second=value; //change existing.....
                return;
            }
        }
        list.push_back({key,value}); //if not present just push....
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
       int ind = getInd(key);
       auto& list = um[ind];
       for(auto i:list)
       {
           if(i.first==key)
               return i.second;
       }
       return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int ind = getInd(key);
        auto& list = um[ind];
        for(auto i:list)
        {
            if(i.first==key)
            {
                list.remove(i);
                return;
            }
        }
    }
};