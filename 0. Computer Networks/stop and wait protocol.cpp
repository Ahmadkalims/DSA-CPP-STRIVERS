#include <iostream>
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

// Function to simulate Sliding Window Protocol (Go-Back-N ARQ)
void slidingWindowProtocol(int totalFrames, int windowSize) {
    srand(time(0)); // Seed for random number generation
    int ack, i = 0;
    
    while (i < totalFrames) {
        int j;
        cout << "Sending frames: ";
        for (j = 0; j < windowSize && (i + j) < totalFrames; j++) {
            cout << i + j << " ";
        }
        cout << endl;

#ifdef _WIN32
        Sleep(1000);
#else
        sleep(1);
#endif

        // Simulating ACK reception with random success/failure
        if (rand() % 2) {
            cout << "Acknowledgment received for frames up to " << i + j - 1 << "\n" << endl;
            i += j; // Move window forward
        } else {
            cout << "Timeout! Resending frames...\n" << endl;
        }
    }
    cout << "All frames sent successfully." << endl;
}

int main() {
    int totalFrames, windowSize;
    cout << "Enter the number of frames to send: ";
    cin >> totalFrames;
    cout << "Enter window size: ";
    cin >> windowSize;
    slidingWindowProtocol(totalFrames, windowSize);
    return 0;
}
