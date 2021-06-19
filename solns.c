/* Enter your solutions in this file */
#include <stdio.h>
float average(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return (float)sum/(float)n;
}
int factors(int n, int arr[]){
    int fact=2,i=0;
    while(n!=1){
        if(n%fact==0){
            arr[i]=fact;
            n/=fact;
            i++;
        }
        else fact++;
        
    }
    return i;
}
int max(int arr[], int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    return max;
}
int min(int arr[], int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]) min=arr[i];
    }
    return min;
}
int mode(int arr[], int n){
     int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]) min=arr[i];
        }
    int count[(max-min)];
    for(int i=min;i<=max;i++){
    count[i]=0;
        for(int j=0;j<n;j++){
           if (i==arr[j]) count[i]++;
        }
    }
    for(int i=min;i<=max;i++){
        if(count[min]<count[i]) min=i;
    }
    return min;
}

