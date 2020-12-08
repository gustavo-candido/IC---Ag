b#include <bits/stdc++.h>
using namespace std;

// condicao de parada
bool finish() {

}

vector<int> evaluation() {
    
}

vector<int> getSubjectsToReproduce(vector<int> &population, vector<int> &evaluation) {
    
}

void mergeChilds(vector<int> &population, vector<int> childs) {
    
}

void makeMutation(vector &population) {
        
} 

void AG() {
    vector< vector<int> > population =  generatePopulation();

    while (!finish()) {
        for(auto subject: population) {
            vector<int> evaluation = eval(subject);
            vector<int> childs = getSubjectsToReproduce(population, evaluation);
            mergeChilds(population, childs);
            makeMutation(population);
        }
    }
}


int main()
{
    vector< vector<int> > population =  generatePopulation();

    while (!finish()) {
        for(auto subject: population) {
            vector<int> evaluation = eval(subject);
            vector<int> childs = getSubjectsToReproduce(population, evaluation);
            mergeChilds(population, childs);
            makeMutation(population);
        }
    }

}

// select a substring from parents at random
// exchange subgroup between parents
// create the relationship Map
//
vector<int> pmx(s, t)
{
     // choose two crossover points.
   int x1 = rand()% (s.length - 1)
   int x2 = x1 + rand() * (s.length - x1)
    

}




