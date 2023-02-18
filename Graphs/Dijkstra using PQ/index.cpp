class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> distance(V, 1e9);
        pq.push({0, S});
        distance[S] = 0;
        while(!pq.empty())
        {
            int weight{pq.top().first};
            int node{pq.top().second};
            pq.pop();
            for(auto it : adj[node])
            {
                int nNode{it[0]};
                int nWeight{it[1]};
                int currWeight{weight + nWeight};
                if(distance[nNode] > currWeight)
                {
                    distance[nNode] = currWeight;
                    pq.push({currWeight, nNode});
                }
            }
        }
        return distance;
    }
};