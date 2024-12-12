//Tomoka 1123565
//20241212

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void FifoQueue(int index, vector<vector<int>> &vec, vector<int> &ans)
{
    bool isExist = false;
    int num = vec[index].size();
    for(int i = 0; i < num; i++){
        if(index < vec[index][i]){
            isExist = false;
            for(auto a : ans){
                if(a == vec[index][i]){
                    isExist = true;
                }
            }
            if(!isExist){
                ans.push_back(vec[index][i]);
            }
            int next = vec[index][i];
            FifoQueue(next, vec, ans);

        }
    }
}

int main()
{
    int node;
    cout << "Enter the number of nodes: ";
    cin >> node;

    vector<vector<int>> vec(node);

    string adj;
    cout << "Enter the adjacency list (the input is split based on newline characters): " << endl;
    for(int i = 0; i < node; i++){
        cin.ignore();
        getline(cin, adj);
        int digit;
        istringstream iss(adj);
        while (iss >> digit) {
            vec[i].push_back(digit);
        }
    }

    vector<int> ans = {0};
    int index = 0;
    FifoQueue(index, vec, ans);

    cout << endl;
    cout << "[";
    cout << ans[0];
    for(int i = 1; i < node; i++){
        cout << ", " << ans[i];
    }
    cout << "]" << endl;

    return 0;
}
