#include <bits/stdc++.h>
using namespace std;


vector< vector<int> > generatePopulation(int populationSize, int numberMachine) {
    srand(time(NULL));

    vector< vector<int> > ans;

    ans.resize(populationSize);

    for(int i=0; i<populationSize; i++) 
        for(int j=0; j<numberMachine; j++) 
            ans[i].push_back(rand()%numberMachine);

    return ans;
}

vector<int> jobTime() {
    vector<int> ans;

    cin >> 
}




int main()
{
    vector< vector<int> > populationSize = generatePopulation(3, 4);
    vector<int> jobTime;

    for(auto vec: pop) {
        for(auto number: vec) {
            cout << " " << number;
        }puts("");

    }
}

(1, 5)
1 -> a prioridade que a tarefa é executada
5 -> o tempo que a tarefa é executada

 job1  job2   job3  job4
 (1,5) (3,5) (0,6) (0,9)
 (1,5) (3,5) (1,6) (3,9)
 (1,5) (1,5) (1,6) (0,9)

        M1   M2     M3      M4
job1: (1,5) (3,5) (0,6) (0,9)
job2: (1,5) (3,5) (1,6) (3,9)
job3: (1,5) (1,5) (1,6) (0,9)

