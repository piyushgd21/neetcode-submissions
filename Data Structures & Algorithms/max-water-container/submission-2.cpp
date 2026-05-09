class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int area = 0;
        while(left <= right){
            int breadth = right - left;
            int length = min(heights[right], heights[left]);
            area = max(area,length*breadth);
            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        cout << left << " " << right << endl;
        return area;
    }
};
