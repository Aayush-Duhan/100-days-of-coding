vector<int> breakingRecords(vector<int> scores) {
    int minRecord = scores[0], maxRecord = scores[0];
    int minCount = 0, maxCount = 0;

    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] > maxRecord) {
            maxRecord = scores[i];
            maxCount++;
        } else if (scores[i] < minRecord) {
            minRecord = scores[i];
            minCount++;
        }
    }
    
    return {maxCount, minCount};
}