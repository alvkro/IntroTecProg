#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Paciente {
    string nome;
    double peso;
};

void inputDados(Paciente& dados) {
    cin >> dados.nome;
    cin >> dados.peso;
}

double MediaPeso(const vector<Paciente>& relatorio) {
    double PesoTotal = 0;
    if (relatorio.size() == 0) {
        return 0.0;
    }
    else {
        for (int i = 0; i < relatorio.size(); i++) {
            PesoTotal += relatorio[i].peso;
        } 
    }
    return PesoTotal / relatorio.size();
}

int main() {
    vector <Paciente> dados;
    while (true) {
        Paciente NovoPaciente;
        inputDados(NovoPaciente);
        if (NovoPaciente.peso == 0) {
            break;
        }
        dados.push_back(NovoPaciente);
    }
    cout << MediaPeso(dados);

    return 0;
}