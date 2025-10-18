#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int MAX_CONTATOS = 25;

class Contato {
    public:
    string Nome, Email, Numero;

    bool adicionarContato(Contato& contact) { //work
        if (contatos.size() <= MAX_CONTATOS) {
            contatos.push_back(contact);
            return true;
        }
    return false;
}

    bool removerContato(Contato& contact) {
            int index_contact;
            bool found = false;
            for (int i = 0; i < contatos.size(); i++) {
                if (contact.Nome == contatos[i].Nome) {
                    index_contact = i;
                    found = true;
                    break;
                }
            }
            if (found == true) {
                contatos.erase(contatos.begin() + index_contact);
                return true;
            }
        return false;
    }

    bool buscarContato (const Contato& contact) {
        int index_contact;
        bool found = false;
        for (int i = 0; i < contatos.size(); i++) {
            if (contact.Nome == contatos[i].Nome) {
                index_contact = i;
                found = true;
                break;
            }
        }
        if (found == true) {
            return true;
        }
        return false;
    }


private:
    vector <Contato> contatos;
};

int main() {
    Contato Agenda;
    Contato Contact;

    


    return 0;
}