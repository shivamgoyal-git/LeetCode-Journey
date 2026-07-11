class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>graph(n); //adjacy list

        unordered_map<string,int> componentFreq; //freq of uniq adjacy list

        for(int v=0; v<n; v++)  //self loop in adjacny list
        {
            graph[v].push_back(v);
        }

        for(auto edge: edges)  //adjncy list for edges
        {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        for(int v=0; v<n; v++)
        {
            vector<int>neighbour = graph[v];
            sort(neighbour.begin(), neighbour.end());

            //convert vec into str

            string adjList;

            for(int num: neighbour)
            {
                adjList += to_string(num) + ",";
            }
            componentFreq[adjList]++;
        }

        int completeCount =0;

        for(auto entry : componentFreq )
        {
            int size = count(entry.first.begin(),entry.first.end(), ',');
            if(size == entry.second)
            {
                completeCount++;
            }
        }

    return completeCount;

    }
};