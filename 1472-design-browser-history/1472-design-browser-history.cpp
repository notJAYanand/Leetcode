class BrowserHistory {
public:
    stack<string> vis;
    stack<string> backs;
    BrowserHistory(string homepage) {
        vis.push(homepage);
    }
    
    void visit(string url) {
        while(!backs.empty())
        {
            backs.pop();   
        }
        vis.push(url);
    }
    
    string back(int steps) {
        while(steps>0 && vis.size()>1)
        {
            backs.push(vis.top());
            vis.pop();
            steps--;
        }
        return vis.top();
    }
    
    string forward(int steps) {
        while(steps>0 && backs.size()>0)
        {
            vis.push(backs.top());
            backs.pop();
            steps--;
        }
        return vis.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */