#include <iostream>
#define max 10
using namespace std;
class queue
{
    int *arr;
    int front;
    int rear;
public:
    queue() {
        arr = new int[max];
        front = -1;
        rear = -1;
    }
    void enqueue(int element){
        if (front == -1 && rear == -1){
            front = 0;
            rear = 0;
            arr[rear] = element;
        }
        else if (front == (rear + 1) % max){
            cout << "Queue is overflow.." << endl;}
        else{
            rear = (rear + 1) % max;
            arr[rear] = element;}
        }
    void dequeue(){
        if ((front == -1) && (rear == -1)){
            cout << "Queue is underflow.." << endl;}
        else if (front == rear){
        cout<<"The dequeued element is "<< arr[front]<<endl;
        front = -1;
        rear = -1;}
        else{
            cout << "The dequeued element is " << arr[front] << endl;
            front = (front + 1) % max;}
    }
    void display(){
        int i = front;
        if (front == -1 && rear == -1){
            cout << "\n Queue is empty.." << endl;}
        else{
            cout << "\nElements in a Queue are :" << endl;
            while (i <= rear){
                cout << arr[i] << endl;
                i = (i + 1) % max;}
        }
    }
    int peek(){
        if (front == -1 || front > rear){
            cout << "no elements in queue" << endl;
            return -1;}
        return arr[front];}
};
int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.dequeue();
    q.display();
    cout<<q.peek()<<endl;

    return 0;
}
