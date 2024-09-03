for(i=0;i<n; i++){
        x += arr[i];
        coin++;
        if(x>(sum-x)) break;

    }
    cout <<