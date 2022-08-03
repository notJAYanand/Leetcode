class MyCalendar {
public:
    // bool cmp(vector<int>&a,vector<int>&b) {
    //     return a[0]<b[0];
    // }
    
    vector<pair<int,int>> events;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto it:events)
        {
            if(!(it.second<start or end-1<it.first))
                return false;
        }
        events.push_back({start,end-1});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */