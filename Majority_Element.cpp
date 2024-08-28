//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        if(size==1)
        return a[0];
        sort(a,a+size);
        int count=1;
        for(int i=0;i<size-1;i++)
        {
            
            if(a[i]==a[i+1])
            {
                count++;
                if(count>size/2)
                return a[i];
            }
            else
            {
                count=1;
            }
        }
        return -1;
        
    }
};
