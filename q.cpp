#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int h){
    int k=arr[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<k){
            i++;
            swap(arr[j],arr[i]);
        }
        k++;
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void quicksort(int arr[],int l,int h){
    if(l<h){
        int p=partition(arr,l,h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }
}



void merge(int arr[],int l,int m,int r){
    int n1=l-m+1;
    int n2=r-m;
    int l[n1];
    int r[n2];
    for(int i=0;i<n1;i++){
        l[i]=arr[l+i];
    }
     for(int j=0;j<n2;j++){
        r[j]=arr[m+1+j];
    }
    int i=0;
    int j=0,k=l;
    while(i<n1 && j<n2){
        if(l[i]<=r[j]){
            arr[k]=l[i];
            i++;
            
        }else{
            arr[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=r[j];
        j++;
        k++;
    }
}

void merge(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        merge(arr,l,m);
        merge(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main(){

}