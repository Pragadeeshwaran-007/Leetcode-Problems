class Solution {
public:
    int totalWaviness(int num1, int num2) {
        static array<long, 100001> arr = [] {
            array<long, 100001> arr;
            for (int i = 0; i < 100; i++) {
                arr[i] = 0;
            }

            for (int i = 100; i < 100001; i++) {
                int wave = 0;
                int n = i;

                int prev = n % 10;   
                n /= 10;            
                int curr = n % 10;        
                int next = (n % 100) / 10;  

                if ((prev < curr && next < curr) ||
                    (prev > curr && next > curr)) {
                    wave++;
                }
                wave += arr[n];
                arr[i] = wave;
            }
            for (int i = 1; i < 100001; i++) {
                arr[i] += arr[i - 1];
            }

            return arr;
        } ();
        return arr[num2] - arr[num1 - 1];
    }
};
