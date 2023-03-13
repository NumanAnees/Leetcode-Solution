class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        int count=1; //not 0 bcoz first activity
        vector<pair<int,int>> vec;
        for(int i=0;i<n;i++){
            vec.push_back({end[i],start[i]}); //push in pair {end,start}....
        }
        sort(vec.begin(),vec.end()); //sort based on end time....
        //make a pointer to track of last inserted activity....
        //no need of stack just use a pointer...
        int last=0;//because 0 is automatically inserted...
        for(int i=1;i<n;i++){
            if(vec[i].second > vec[last].first) //start of current greater than end of prev...
            {
                last=i; //now change recent push to curr i...
                count++;
            }
        }
        return count;
    }
};