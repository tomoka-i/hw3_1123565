//Tomoka 1123565
//20241212

#include <iostream>
using namespace std;

int main()
{
    int node, edge;
    cout << "Enter the number of nodes: V = ";
    cin >> node;
    cout << "Enter the number of edges: E = ";
    cin >> edge;

    int arr[100][100] = {0};
    int a, b;
    cout << "Enter the edges:" << endl;
    for(int i = 0; i < edge; i++){
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    cout << "[";
    for(int i = 0; i < node; i++){
        cout << "[";
        bool flag = false;
        for(int j = 0; j < node; j++){

            if(arr[i][j] == 1){
                if(flag){
                    cout << ", ";
                }
                cout << j;
                flag = true;
            }
        }
        cout << "]";
        if(i != node - 1){
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
