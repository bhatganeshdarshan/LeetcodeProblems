class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int score = 0;
        priority_queue<int> heap;
        heap.push(a);
        heap.push(b);
        heap.push(c);
        while(heap.size()>1){
            int left = heap.top();
            heap.pop();
            int right = heap.top();
            heap.pop();
            left--;
            right--;
            if(left!=0) heap.push(left);
            if(right!=0) heap.push(right);
            score++;
        }
        return score;
        
    }
};