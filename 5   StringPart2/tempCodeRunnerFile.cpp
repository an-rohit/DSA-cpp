int max =0;
    for(int i=0;i<v.size();i++){
        if(v[max]>=v[i+1]){
            max=i;
        }
        else{
            max=i+1;
        }
    }    
    cout<<max;