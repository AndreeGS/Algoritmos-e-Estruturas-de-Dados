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

    cout << "Bem vindo ao sistema bancario!" << endl;
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
        cout << "1-Cadastrar novo usuario\n2-Editar usuario\n3-Excluir usuario\n4-Sair" << endl;
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
            cout << "Para qual usuario voce deseja editar? Digite o nome: ";
            cin.ignore();
            getline(cin, nameEdit);

            bool encontrado = false;
            for (auto& cliente : usuarios) {
                if (cliente.nome == nameEdit) {
                    encontrado = true;
                    
                    cout << "\nInformacoes " << endl;

                    cout << "\nInforme seu nome completo: ";
                    getline(cin, name);

                    cout << "\nAgora crie uma senha: ";
                    cin >> senha;

                    cout << "\nInforme o email: ";
                    cin >> email;

                    cliente.nome = name;
                    cliente.senha = senha;
                    cliente.email = email;

                    break; 
                }
            }
            if (!encontrado)
                cout << "Usuário nao encontrado!" << endl;
            else
                cout << "Usuário editado com sucesso!" << endl;
            break;
        }
        case 3: {
            string nameDelete;
            cout << "Qual usuário você deseja excluir? Digite o nome: ";
            cin.ignore();
            getline(cin, nameDelete);

            for (auto it = usuarios.begin(); it != usuarios.end(); ++it) {
                if (it->nome == nameDelete) {
                    usuarios.erase(it); 
                    cout << "Usuário removido com sucesso!" << endl;
                    break; 
                }
            }
            break;
        }
        case 4:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
            break;
        }
    } while (selecao != 4);

    return 0;
}
