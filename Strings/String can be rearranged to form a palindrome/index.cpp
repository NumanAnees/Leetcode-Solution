int isPossible (string S)
{
    int n = S.length();
    vector<int> umap(26,0);
    for(int i=0;i<n;i++){
        umap[S[i]-'a']++;
    }
    //check if more than 1 odd numbers....
    int oddNumbers=0;
    for(auto c:umap){
        if(c&1==1) oddNumbers++;
    }
    return oddNumbers<=1;
}