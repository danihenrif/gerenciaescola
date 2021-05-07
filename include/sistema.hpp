#ifndef SISTEMA_HPP
#define SISTEMA_HPP




class Sistema{
    public:
    List *lista;

    Sistema();
    ~Sistema();

    void inserirDadosSistema(float numero_matricula , string nome_estudante, string nome_curso, float nota1, float nota2, float nota3, float media);
};


#endif