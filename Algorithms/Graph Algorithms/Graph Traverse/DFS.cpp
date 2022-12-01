void  DFS(int node , int goal , vector<bool> &vis , vector<vector<int>> &graph){
		//vis is a boolean array with nodes  + 1 size
		// graph is an Adjacency List for our graph
		if(node == goal){
			cout<<"Goal is reached";
		}
		if(vis[node]){
			return;
		}
		vis[node] = 1;
		for(auto child: graph[node]){
			DFS(child , goal , vis  graph);
		}
 
}
