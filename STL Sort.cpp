//STL sort approach
//complexity = nlog(n)
#include <bits/stdc++.h>
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    sort(arr.begin(),arr.end());
    int sequenceLen=1;
    int maxLen=1;
    // let 7,1,5,9,13,6,12,7,11,14 be an array
    //We have sorted it so now it is 
    //     1,5,6,7,7,9,11,12,13,14
    
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]==arr[i-1]+1)  //it search for next consecutive element if found then add it
        {
            sequenceLen++;
        }
        else if(arr[i]==arr[i-1]) //if next element is same as prev element then just skip it (eg.7)
            continue;
        else
        {
            sequenceLen=1;         //or else the single element is treated as a sequence
        }
        maxLen=max(maxLen,sequenceLen);
    }
    return maxLen;
}
   
