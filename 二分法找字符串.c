class Finder {
public:
    int findString(vector<string> str, int n, string x) {
        // write code here
        int high = n - 1;
        int low = 0;
        while(low < high){
            int mid = (low + high) / 2;
            if(str[mid] == x){
                return mid;
            }else if(str[mid] > x){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};
