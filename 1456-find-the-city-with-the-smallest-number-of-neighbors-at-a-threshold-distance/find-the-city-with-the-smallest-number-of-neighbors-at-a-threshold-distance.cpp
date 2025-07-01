class Solution {
public:
    void floydWarshall(vector<vector<int>> &dist) {
        int v=dist[0].size();
        for(int k=0;k<v;k++){
		    for(int i=0;i<v;i++){
			    for(int j=0;j<v;j++){
				    dist[i][j]=min(dist[i][j] , dist[i][k]+dist[k][j]);
			    }
		    }
	    }
    }
    vector<vector<int>> createadj(vector<vector<int>>& edge,int v){
        vector<vector<int>> dist(v,vector<int>(v,1e8));
        for(auto vi:edge){
            int i=vi[0];
            int j=vi[1];
            int d=vi[2];
            dist[i][j]=d;
            dist[j][i]=d;
        }
        for(int i=0;i<v;i++){
			    for(int j=0;j<v;j++){
				    if(i==j){
                        dist[i][j]=0;
                    }
			    }
		    }
        return dist;
    }
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> dist=createadj(edges,n);
        floydWarshall(dist);
        vector<int> rows;
        int count=0;
        for(auto vect:dist){
            for(int i=0;i<n;i++){
                if(vect[i]!=0 && vect[i]<=distanceThreshold){
                    count++;
                }
            }
            rows.push_back(count);
            count=0;
        }
        int mini=rows[0];
        int ind=0;
        for(int i=0;i<n;i++){
            if(rows[i]<=mini){
                mini=rows[i];
                ind=i;
            }
        }
        return ind;
    }
};