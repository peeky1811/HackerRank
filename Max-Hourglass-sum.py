def hourglassSum(arr):
    #since our max sum =7*-9 
    #where 7 is total no of vals to be summed in an hourglass
    #-9 is least value possible
    maxsum=-63
    for i in range(4):
        for j in range(4):
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]
            maxsum=max(sum,maxsum)
    return maxsum
