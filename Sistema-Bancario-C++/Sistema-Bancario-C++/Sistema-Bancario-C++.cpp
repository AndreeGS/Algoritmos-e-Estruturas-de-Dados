#include <iostream>
#include <string> 
#include <vector>

using namespace std;

class Client {
public:
    string nome;
    int senha;
    string email;

    Client(string Nome, int Senha, string Email) {
        nome = Nome;
        senha = Senha;
        email = Email;
    }
};

int main() {
    string name, email;
    int senha, selecao;

    vector<Client> usuarios;

    cout << "Bem vindo ao sistema bancário!" << endl;
    cout << "Primeiramente vamos realizar seu cadastro: " << endl;
    cout << "Informe seu nome completo: ";
    getline(cin, name);

    cout << "Agora crie uma senha: ";
    cin >> senha;

    cout << "Informe o email: ";
    cin >> email;

    Client client(name, senha, email);

    usuarios.push_back(client);

    cout << "Usuario cadastrado com sucesso!\nO que você deseja fazer agora?" << endl;

    do {
        cout << "1-Cadastrar novo usuario\n2-Editar usuario\n3-Excluir usuario" << endl;
        cin >> selecao;

        switch (selecao) {
        case 1: {
            cin.ignore(); 
            cout << "Informe seu nome completo: ";
            getline(cin, name);

            cout << "Agora crie uma senha: ";
            cin >> senha;

            cout << "Informe o email: ";
            cin >> email;

            Client newClient(name, senha, email);

            usuarios.push_back(newClient); 
            break;
        }
        case 2: {
            string nameEdit;
            cout << "Para qual usuário voce deseja editar? Digite o nome: ";
            getline(cin, nameEdit);

            bool encontrado = false;
            for (const auto& cliente : usuarios) {
                if (cliente.nome == nameEdit) {
                    encontrado = true;
                }
                break;
            }

            cout << "Usuário removido com sucesso!" << endl;

        default:
            cout << "Opçao inválida!" << endl;
            break;
        }
    } while (selecao != 4);

    return 0;
}
