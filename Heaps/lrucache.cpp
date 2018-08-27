#include<list>
map<int,list<pair<int,int>>::iterator> mp;
list<pair<int,int>> mlist;
int cap;
LRUCache::LRUCache(int capacity) {
    cap=capacity;
    mp.clear();
    mlist.clear();

}

int LRUCache::get(int key) {
    if(mp.find(key)==mp.end())
    return -1;
    auto x=mp.find(key)->second;
    mlist.splice(mlist.begin(),mlist,x);
    return x->second;
}

void LRUCache::set(int key, int value) {
   auto found= mp.find(key);
    if(found==mp.end())
    {
        if(mlist.size()==cap)
        {
            int k = mlist.back().first;
            mp.erase(k);
            mlist.pop_back();
        }
        mlist.emplace_front(key,value);
        mp[key]=mlist.begin();
    }
    else 
    {
        found->second->second = value;
        mlist.splice(mlist.begin(),mlist,found->second);
        
    }

}
