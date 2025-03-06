#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector < int > arrival_times(n);
        vector < int > departure_times(n);

        for (int i = 0; i < n; ++i) {
            cin >> arrival_times[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> departure_times[i];
        }

        vector < pair < int, int >> events;
        for (int i = 0; i < n; ++i) {
            events.push_back({
                arrival_times[i],
                1
            }); // 1 for arrival
            events.push_back({
                departure_times[i],
                -1
            }); // -1 for departure
        }

        sort(events.begin(), events.end());

        int current_guests = 0;
        int max_guests = 0;

        for (const auto & event: events) {
            current_guests += event.second;
            max_guests = max(max_guests, current_guests);
        }

        cout << max_guests << endl;
    }

    return 0;
}