#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Aluno{
    string nomeCompleto, cpf, idade, serie;
    long int matricula;

    public:

    Aluno(){

    }

    Aluno(string nomeCompleto, string cpf, string idade, string serie, long int matricula){
        this -> nomeCompleto = nomeCompleto;
        this -> cpf = cpf;
        this -> idade = idade;
        this -> serie = serie;
        this -> matricula = matricula;
    }

    string getNome(){
        return this -> nomeCompleto;
    }

    void setNome(string nomeCompleto){
        this -> nomeCompleto = nomeCompleto;
    }

    string getCPF(){
        return this -> cpf;
    }

    void setCPF(string cpf){
        this -> cpf = cpf;
    }

    string getIdade(){
        return this -> idade;
    }

    void setIdade(string idade){
        this -> idade = idade;
    }

    string getSerie(){
        return this -> serie;
    }

    void setSerie(string serie){
        this -> serie = serie;
    }

    long int getMatricula(){
        return this -> matricula;
    }

    void setMatricula(long int matricula){
        this -> matricula = matricula;
    }

};

class Funcionario{
    string nomeCompleto, cpf, idade, cargo;
    long int matricula;
    float salario; 
    
    public:

    Funcionario(){

    }

    Funcionario(string nomeCompleto, string cpf, string idade, string cargo, long int matricula, float salario){
        this -> nomeCompleto = nomeCompleto;
        this -> cpf = cpf;
        this -> idade = idade;
        this -> cargo = cargo;
        this -> matricula = matricula;
        this -> salario = salario;
    }

    string getNome(){
        return this -> nomeCompleto;
    }

    void setNome(string nomeCompleto){
        this -> nomeCompleto = nomeCompleto;
    }

    string getCPF(){
        return this -> cpf;
    }

    void setCPF(string cpf){
        this -> cpf = cpf;
    }

    string getIdade(){
        return this -> idade;
    }

    void setIdade(string idade){
        this -> idade = idade;
    }

    string getCargo(){
        return this -> cargo;
    }

    void setCargo(string cargo){
        this -> cargo = cargo;
    }

    long int getMatricula(){
        return this -> matricula;
    }

    void setMatricula(long int matricula){
        this -> matricula = matricula;
    }

    float getSalario(){
        return this -> salario;
    }

    void setSalario(float salario){
        this -> salario = salario;
    }
};

class Escola{
    string nomeEscola, cnpj;
    Funcionario *funcionarios = new Funcionario[5];
    Aluno *alunos = new Aluno[10];
    int cont = 0;

    public:

    Escola(string nomeEscola, string cnpj){
        this -> nomeEscola = nomeEscola;
        this -> cnpj = cnpj;
    }

    string getNome(){
        return this -> nomeEscola;
    }

    void setNome(string nomeEscola){
        this -> nomeEscola = nomeEscola;
    }

    string getCNPJ(){
        return this -> cnpj;
    }

    void setCNPJ(string cnpj){
        this -> cnpj = cnpj;
    }

    // Métodos de manipulação gerais

    void addAluno(string nomeCompleto, string cpf, string idade, long int matricula, string serie){
        if(cont < 10){
            alunos[cont].setNome(nomeCompleto);
            alunos[cont].setCPF(cpf);
            alunos[cont].setIdade(idade);
            alunos[cont].setMatricula(matricula);
            alunos[cont].setSerie(serie);
            cont++;
        }else{
            cout << "Não é possível adicionar mais alunos (MÁXIMO = 10)";
        }
    }

    void addFuncionario(string nomeCompleto, string cpf, string idade, long int matricula, string cargo, float salario){
        if(cont < 5){
            funcionarios[cont].setNome(nomeCompleto);
            funcionarios[cont].setCPF(cpf);
            funcionarios[cont].setIdade(idade);
            funcionarios[cont].setMatricula(matricula);
            funcionarios[cont].setSalario(salario);
            funcionarios[cont].setCargo(cargo);
            cont++;
        }else{
            cout << "Não é possível adicionar mais funcionários (MÁXIMO = 5)";
        }
    }
    
    void listarAlunos(){
        for(int i = 0; i < 10; i++){
            cout << "Nome completo: " << alunos[i].getNome() << endl;
            cout << "CPF: " << alunos[i].getCPF() << endl;
            cout << "Idade: " << alunos[i].getIdade() << endl;
            cout << "Matrícula: " << alunos[i].getMatricula() << endl;
            cout << "Série: " << alunos[i].getSerie() << endl;
        }
    }

    void listarFuncionarios(){
        for(int i = 0; i < 5; i++){
            cout << "Nome completo: " << funcionarios[i].getNome() << endl;
            cout << "CPF: " << funcionarios[i].getCPF() << endl;
            cout << "Idade: " << funcionarios[i].getIdade() << endl;
            cout << "Matrícula: " << funcionarios[i].getMatricula() << endl;
            cout << "Cargo: " << funcionarios[i].getCargo() << endl;
            cout << "Salário: $" << funcionarios[i].getSalario() << endl;
        }
    }

    float calcularSalarios(){
        float soma = 0;
        for(int i = 0; i < 5; i++){
            soma += funcionarios[i].getSalario();
        }
        return soma;
    }

};

int main(){
    string nomeEmpresa, cnpj;
    int choice;

    cout << "Digite o nome da sua nova escola: ";
    cin >> nomeEmpresa;
    cout << "Digite o CNPJ da sua escola: ";
    cin >> cnpj;

    Escola *school = new Escola(nomeEmpresa, cnpj);

    while(true){
        cout << "\n================================\n";
        cout << "Escolha uma das opções abaixo:\n"  << endl;
        cout << "1) Listar alunos" << endl;
        cout << "2) Listar funcionários" << endl;
        cout << "3) Adicionar aluno" << endl;
        cout << "4) Adicionar funcionário" << endl;
        cout << "5) Somar salários" << endl;
        cout << "0) Sair" << endl;
        cout << "\n================================\n";
        cin >> choice;

        if(choice == 1){
                school->listarAlunos();

        } else if(choice == 2){
                school->listarFuncionarios();

        } else if (choice == 3){
                string nomeCompleto, cpf, idade, serie;
                long int matricula;
                cout << "\nDigite o nome do aluno: ";
                cin >> nomeCompleto;
                cout << "\nDigite o CPF do aluno: ";
                cin >> cpf;
                cout << "\nDigite a idade do aluno: ";
                cin >> idade;
                cout << "\nDigite a matrícula do aluno: ";
                cin >> matricula;
                cout << "\nDigite a série do aluno: ";
                cin >> serie;
                school->addAluno(nomeCompleto, cpf, idade, matricula, serie);

        } else if (choice == 4){                
                string nomeCompleto, cpf, idade, cargo;
                long int matricula;
                float salario;
                
                cout << "\nDigite o nome do funcionário: ";
                cin >> nomeCompleto;
                cout << "\nDigite o CPF do funcionário: ";
                cin >> cpf;
                cout << "\nDigite a idade do funcionário: ";
                cin >> idade;
                cout << "\nDigite a matrícula do funcionário: ";
                cin >> matricula;
                cout << "\nDigite o cargo do funcionário: ";
                cin >> cargo;
                cout << "\nDigite o salário do funcionário: ";
                cin >> salario;

                school->addFuncionario(nomeCompleto, cpf, idade, matricula, cargo, salario);
        
        } else if (choice == 5){
                float salarios;
                salarios = floorf(school->calcularSalarios() * 100)/100;
                cout << "\nSalários somados = R$" << salarios;
       
        } else if (choice == 0){
                cout << "\nDeixando o programa...\n";
                break;
        
        } else{
                cout << "\nOpção inválida. Tente novamente.\n";
        }
    }

    return 0;
}