#include<bits/stdc++.h>

using namespace std;

struct Item {
    int value, weight;
  
    // Constructor
    Item(int value, int weight)
        : value(value), weight(weight)
    {
    }
};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}


double fractionalKnapsack(struct Item arr[],
int N,int size){
    sort(arr,arr+size,cmp);

    int currentWeight=0;
    double finalWeignt=0.0;

    for (int i = 0; i < size; i++)
    {
        if(currentWeight+arr[i].weight<=N){
            currentWeight+=arr[i].weight;
            finalWeignt+=arr[i].value;
            cout<<finalWeignt<<"\n\n\n";
        }
        else{
            int remaining=N-currentWeight;
            finalWeignt+=arr[i].value*((double)remaining/arr[i].weight);
            break;
        }

    }
    return finalWeignt;

}



int main()
{int N = 60;
  
    // Given weights and values as a pairs
    Item arr[] = { { 100, 10 },
                   { 280, 40 },
                   { 120, 20 },
                   { 120, 24 } };
  
    int size = sizeof(arr) / sizeof(arr[0]);
  
    // Function Call
    cout << "Maximum profit earned = "
         << fractionalKnapsack(arr, N, size);
    return 0;
}

/*
Time complexity 0(n*logn)
Space complexity 0(n)
*/
