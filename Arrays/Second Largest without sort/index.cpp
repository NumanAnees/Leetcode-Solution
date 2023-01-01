class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int largest=-1;
	    int secondl=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>secondl && arr[i]>largest){
	            //---------------very important step------------------------
	            secondl=largest;
	            largest=arr[i];
	        }
	        else if(arr[i]>secondl && arr[i]<largest){
	            secondl=arr[i];
	        }
	    }
	    return secondl;
	}
};