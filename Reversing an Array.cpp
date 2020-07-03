//cpp solution
vector<int> reverseArray(vector<int> a) {
    vector <int> b;
    for(auto i=a.rbegin();i!=a.rend();i++){
        b.push_back(*i);
    }
    return b;
}

