void BFS(int start, int goal, vector<int> &dis, vector<vector<int>> &graph) {
	dis[start] = 0;
	queue<int> path;
	path.push(start);

	while (!path.empty()) {
		int cur = path.front();
		path.pop();

		if (cur == goal) {
			cout << "reached goal with " << dis[goal] << " distance.";
		}

		for (auto child : graph[cur]) {
			if (dis[child] > dis[cur] + 1) {
				dis[child] = dis[cur] + 1;
				path.push(child);
			}
		}
	}
	cout << "Can't reach the goal";

}
