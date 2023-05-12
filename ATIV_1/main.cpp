#include <iostream>

using namespace std;

class Aluno{
    string nomeCompleto, cfp, idade, serie;
    long int matricula;

    public:

    Aluno(){

    }

    Aluno(string nomeCompleto, string cfp, string idade, string serie, long int matricula){
        this -> nomeCompleto = nomeCompleto;
        this -> cfp = cfp;
        this -> idade = idade;
        this -> serie = serie;
        this -> matricula = matricula;
    }
};

class Funcionario{
    string nomeCompleto, cfp, idade, cargo;
    long int matricula;
    float salario; 
    
    public:

    Funcionario(){

    }

    Funcionario(string nomeCompleto, string cfp, string idade, string cargo, long int matricula, float salario){
        this -> nomeCompleto = nomeCompleto;
        this -> cfp = cfp;
        this -> idade = idade;
        this -> cargo = cargo;
        this -> matricula = matricula;
        this -> salario = salario;
    }
};

int main(){


    return 0;
}