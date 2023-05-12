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

    string getNome(){
        return this -> nomeCompleto;
    }

    void setNome(string nomeCompleto){
        this -> nomeCompleto = nomeCompleto;
    }

    string getCFP(){
        return this -> cfp;
    }

    void setNome(string cfp){
        this -> cfp = cfp;
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

    string getNome(){
        return this -> nomeCompleto;
    }

    void setNome(string nomeCompleto){
        this -> nomeCompleto = nomeCompleto;
    }

    string getCFP(){
        return this -> cfp;
    }

    void setNome(string cfp){
        this -> cfp = cfp;
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

int main(){


    return 0;
}