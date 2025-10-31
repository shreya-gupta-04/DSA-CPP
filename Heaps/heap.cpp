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
};
int main(){
    heap h;
    h.insert(50);
    h.insert(40);
    h.insert(80);
    h.insert(10);
    h.insert(54);
    h.insert(20);
    h.print();
    return 0;
}