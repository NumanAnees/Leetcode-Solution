
// Class to create a new graph node
class Node
{
	public:
		int key;
		vector<Node *> adj;
		
		// key is the value of the node
		// adj will be holding a dynamic
		// list of all Node type neighboring
		// nodes
		Node(int key)
		{
			this->key = key;
		}
};

// Function to clone a graph. To do this, we
// start reading the original graph depth-wise,
// recursively. If we encounter an unvisited
// node in original graph, we initialize a
// new instance of Node for cloned graph with
// key of original node
Node *cloneGraph(Node *oldSource,
				Node *newSource,
				vector<bool> &visited)
{
	Node *clone = NULL;
	
	if (!visited[oldSource->key] &&
		!oldSource->adj.empty())
	{
		for(auto old : oldSource->adj)
		{
			
			// Below check is for backtracking, so new
			// nodes don't get initialized everytime
			if (clone == NULL ||
			(clone != NULL &&
			clone->key != old->key))
				clone = new Node(old->key);
				
			newSource->adj.push_back(clone);
			cloneGraph(old, clone, visited);
			
			// Once, all neighbors for that particular node
			// are created in cloned graph, code backtracks
			// and exits from that node, mark the node as
			// visited in original graph, and traverse the
			// next unvisited
			visited[old->key] = true;
		}
	}
	return newSource;
}