int getTotalX(vector<int> a, vector<int> b) {
    auto gcd = [&](int x, int y) {
        while (y) {
            int t = y;
            y = x % y;
            x = t;
        }
        return x;
    };
    auto lcm = [&](int x, int y) {
        return (long long)x / gcd(x,y) * y;
    };
    int L = a[0];
    for(int i=1;i<a.size();i++){
        L = (int)lcm(L,a[i]);
    }
    int G = b[0];
    for(int i=1;i<b.size();i++){
        G = gcd(G,b[i]);
    }
    int count=0;
    for(int x=L; x<=G; x+=L){
        if(G%x==0) count++;
    }
    return count;
}