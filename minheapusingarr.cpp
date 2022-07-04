#include <bits/stdc++.h>
#include<math.h>
using namespace std;
class minheap{
    public:
    int *arr;
    int capacity; //maximum possible size of heap
    int heap_size;  // current size

    minheap(int cap){
        heap_size = 0;
        capacity = cap;
        arr = new int[cap];
    }
    void linearsearch(int val){
        for (int i = 0; i < heap_size; i++)
        {
            if (arr[i] == val)
            {
                cout<<"value forund!"<<endl;
                return;
            }
            
        }
        cout<<"value not found!"<<endl;
    }
    void printarray(){
        for (int i = 0; i < heap_size; i++)
        {
            cout<<arr[i]<<" ";
        }       
        cout<<endl;
    }
    int height(){
        {
            return ceil(log2(heap_size+1)) - 1;
        }
    }
    void insert(int k){
        if (heap_size == capacity)
        {
            cout<<"overflow heap"<<endl;
            return;
        }
        heap_size++;
        int i = heap_size -1;
        arr[i] = k;
        while (i!= 0 && arr[(i-1)/2] > arr[i])
        {
            swap(arr[i],arr[(i-1)/2]);
            i = (i-1)/2;
        }
    }
    void minheapify(int i){
        int l = 2*i+1;
        int r = 2*i+2;
        int smallest = i;
        if (l < heap_size && arr[l] > arr[i])
        {
            smallest = l;
        }
        if (r < heap_size && arr[r] > arr[smallest])
        {
            smallest = r;
        }
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            minheapify(smallest);
        }
    }
            
    int extractmin(){
        if (heap_size <= 0 )
        {
            return INT_MAX;
        }
        if (heap_size == 1)
        {
            heap_size --;
            return arr[0];
        }
        int root = arr[0];
        arr[0] = arr[heap_size-1];
        heap_size --;
        minheapify(0);
        return root;      
    }
    void deletion(int i){
        decreasekey(i,INT_MIN);
        extractmin();
    }
    void decreasekey(int i,int neew_val){
        arr[i] = neew_val;
        while(i != 0 and arr[(i-1)/2] > arr[i]){
            swap(arr[i],arr[(i-1)/2]);
            i = (i-1)/2;
        }
    }

};
int main()
{
    int s;
    cin>>s;
    minheap obj(s);
    cout<<"Min Heap is created"<<endl;
    int option,val;
    do
    {
        cout<<"which operation u want to perform?enter 0 to exit!"<<endl;
        cout<<"1.  Insert"<<endl;
        cout<<"2.  search"<<endl;
        cout<<"3.  delete"<<endl;
        cout<<"4.  get min"<<endl;
        cout<<"5.  extract min"<<endl;
        cout<<"6.  height"<<endl;
        cout<<"7.  print heap values"<<endl;
        cout<<"8.  clear screen"<<endl;
        cout<<"0.  exit"<<endl;

        cin>>option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout<<"1.  Insert"<<endl;
            cin>>val;
            obj.insert(val);
            cout<<endl;
            break;
        
        case 2:
            cout<<"2.  search"<<endl;
            cin>>val;
            obj.linearsearch(val);
            break;
        case 3:
            cout<<"3.  delete"<<endl;
            cin>>val;
            obj.deletion(val);
            break;
        case 4:
            cout<<"4.  get min"<<endl;
            // obj.getmin();
            break;
        case 5:
            cout<<"5.  extract min"<<endl;
            obj.extractmin();
            break;
        case 6:
            cout<<"6.  height"<<endl;
            cin>>val;
            // obj.height();
            break;
        case 7:
            cout<<"7.  print heap values"<<endl;
            obj.printarray();
            break;
        case 8:
            cout<<"8.  clear screen"<<endl;
            system("cls");
            break;
        default:
            cout<<"enter proper option"<<endl;
        }

    } while (option != 0);
    return 0;
}