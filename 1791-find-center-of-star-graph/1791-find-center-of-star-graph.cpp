class Solution {
public:
    unordered_map<int,vector<int>> convert(vector<vector<int>> &edges) {
	unordered_map<int,vector<int>>graph;
	for(auto edge : edges) {
		vector<int> e= {edge[0],edge[1]};
		if(!(graph.find(e[0])!=graph.end())) {
			graph[e[0]]={};
		}
		if(!(graph.find(e[1])!=graph.end())) {
			graph[e[1]]={};
		}		
		graph[e[0]].push_back(e[1]);
		graph[e[1]].push_back(e[0]);
	}
	return graph;
}    
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>graph=convert(edges);
        int n=graph.size();
        for(auto i: graph)
        {
            if(i.second.size()==n-1)
                return i.first;
        }
        return -1;
    }
};