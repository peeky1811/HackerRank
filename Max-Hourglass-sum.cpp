int hourglassSum(vector<vector<int>> arr) {
    int hour_glass_sum=0;
    int result=INT_MIN;
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            hour_glass_sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]
                                    +arr[i+1][j+1]
                           +arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            result=max(hour_glass_sum,result);
        }
    }
    return result;
}
