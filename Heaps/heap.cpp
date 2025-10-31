#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[101];
    int size=0;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size+=1;
        int idx=size;
        arr[idx]=val;
        while(idx>1){
            int p=idx/2;
            if(arr[p]<arr[idx]){
                swap(arr[p],arr[idx]);
            }else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<size;i++){
            cout<<arr[i]<<endl;
        }
    }
    void deleteh(){
        if(size==0){
            cout<<"empty heap";
            return;
        }
        arr[1]=arr[size];
        size--;

        int i=1;
        while(i<size){
            int li=2*i;
            int ri=2*i+1;
            if(li<size && arr[li]>arr[i]){
                swap(arr[li],arr[i]);
                i=li;
            }
            else if(ri<size && arr[ri]>arr[i]){
                swap(arr[ri],arr[i]);
                i=ri;
            }else{
                return;
            }
        }
    }
    void heapify(int arr[],int n,int i){
        int largest=i;
        int l=2*i;
        int r=2*i+1;
        if(l<=n && arr[l]>arr[largest]){
            largest=l;
        }
         if(r<=n && arr[r]>arr[largest]){
            largest=r;
        }

        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }

    }
    void heapsort(int arr[],int n){
        int size=n;
        while(size>1){
            swap(arr[size],arr[1]);
            size--;
            heapify(arr,size,1);
        }
    }
};
int main(){
    heap h;
    h.insert(50);
    h.insert(40);
    h.insert(80);
    h.insert(10);
    h.insert(54);
    h.insert(20);
    h.deleteh();
    h.print();
    int arr[]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        h.heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    h.heapsort(arr,n);
    cout<<"After sorting";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}

//0 based indexing 
// void minheapify(vector<int> &arr,int n,int i){
//     int smallest=i;
//     int l=2*i+1;
//     int r=2*i+2;

//     if(l<n && arr[l]< arr[smallest]){
//         smallest=l;
//     }
//     if(r<n && arr[r]< arr[smallest]){
//         smallest=r;
//     }
//     if(smallest!=i){
//         swap(arr[i],arr[smallest]);
//         heapify(arr,n,smallest);
//     }
// }
