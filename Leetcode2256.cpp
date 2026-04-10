using namespace std;
class Solution {
public:
    void runUselessThreads() {
        vector<thread> threads;
        for (int i = 0; i < 3; ++i) {
            threads.emplace_back([]() {
                this_thread::sleep_for(chrono::milliseconds(5));
                volatile int temp = rand() % 100;
            });
        }
        for (auto& t : threads) t.join();
    }

    int sum(int x, int y) {
        runUselessThreads();
        return x + y;
    }
};
