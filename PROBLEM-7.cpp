#include<bits/stdc++.h>
using namespace std;
// Define the Workshop structure
struct Workshop {
    int start_time;
    int duration;
    int end_time;

    Workshop(int start, int dur) {
        start_time = start;
        duration = dur;
        end_time = start + dur;
    }
};

// Define the Available_Workshops structure
struct Available_Workshops {
    int n; // Number of workshops
    Workshop** workshops; // Array of pointers to Workshop objects

    Available_Workshops(int num) {
        n = num;
        workshops = new Workshop*[n];
    }

    ~Available_Workshops() { // Destructor to free memory
        for (int i = 0; i < n; ++i) {
            delete workshops[i];
        }
        delete[] workshops;
    }
};

// Function to initialize Available_Workshops
Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* available = new Available_Workshops(n);
    for (int i = 0; i < n; ++i) {
        available->workshops[i] = new Workshop(start_time[i], duration[i]);
    }
    return available;
}

// Function to calculate the maximum number of non-overlapping workshops
int CalculateMaxWorkshops(Available_Workshops* ptr) {
    vector<Workshop*> workshops(ptr->workshops, ptr->workshops + ptr->n);

    // Sort workshops by end time (Greedy Algorithm)
    sort(workshops.begin(), workshops.end(), [](Workshop* a, Workshop* b) {
        return a->end_time < b->end_time;
    });

    int count = 0, last_end_time = 0;

    for (auto& w : workshops) {
        if (w->start_time >= last_end_time) { // Check if we can attend this workshop
            count++;
            last_end_time = w->end_time;
        }
    }
    return count;
}
