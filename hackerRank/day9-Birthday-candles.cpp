int birthdayCakeCandles(vector<int> candles) {
    int n = *max_element(candles.begin(),candles.end());
    int c = 0;
    for(auto x : candles){
        if(x == n){
            c++;
        }
    }
    return c;
}