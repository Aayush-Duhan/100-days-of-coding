string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string minutesAndSeconds = s.substr(2, 6);
    string period = s.substr(8, 2);
    if (period == "AM") {
        if (hour == 12) {
            hour = 0;
        }
    } else { 
        if (hour != 12) {
            hour += 12;
    }
    }
    return (hour < 10 ? "0" : "") + to_string(hour) + minutesAndSeconds;
}