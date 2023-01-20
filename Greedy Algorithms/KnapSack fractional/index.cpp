bool comparator(Item a, Item b){
    return ((double)a.value/(double)a.weight)>=((double)b.value/(double)b.weight);
}

class Solution
{
    public:
   
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        sort(arr,arr+n,comparator); 
        double ans=0; 
         for(int i=0;i<n;++i){
             if(w>=arr[i].weight){ //check if currVal 's weight is less means we need can take whole..
                  ans+=arr[i].value;
                  w-=arr[i].weight; //decrease the weight
             }
             else{
                 double temp=((double)arr[i].value/arr[i].weight)*w;
                 ans+=temp;
                 break; //just break bcoz we reached the limit...
             }
         }
        return ans;
    }
        
};