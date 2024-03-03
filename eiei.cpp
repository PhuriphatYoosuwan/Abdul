#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void loadingBar(int duration, int resolution = 50) {
    for (int i = 0; i <= resolution; ++i) {
        float progress = (float)i / resolution;
        int barWidth = 70;

        cout << "[";
        int pos = barWidth * progress;
        for (int j = 0; j < barWidth; ++j) {
            if (j < pos) cout << "=";
            else if (j == pos) cout << ">";
            else cout << " ";
        }
        cout << "] " << int(progress * 100.0) << "%\r";
        cout.flush();

        // Simulate work
        this_thread::sleep_for(chrono::milliseconds(duration));
    }
    cout << endl;
}

int main() {
    cout << "Loading...\n";
    loadingBar(100); // 100 milliseconds per step
    cout << "Loading complete!\n";

    return 0;
}
