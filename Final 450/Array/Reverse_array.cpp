//User function Template for C++
 class Solution
{
    public:
    string reverseWord(string str){
        int s = 0;
        int e = str.length() - 1;
        while(s<e){
            swap(str[s++],str[e--]);
        }
        return str;
    }
};

//Approach 2

