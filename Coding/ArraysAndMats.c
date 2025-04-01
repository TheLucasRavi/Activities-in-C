#include <stdio.h> 

int main() { 

        char nomesAlunos [3] [3] = { 
            {"Aluno 0", "Pt: 30", "Mat: 90"}, 
            {"Aluno 1", "Pt: 60", "Mat: 60"}, 
            {"Aluno 2", "Pt: 90", "Mat: 30"} 
        }; 

        printf("Digite o numero do aluno que queira ver as notas... \n"); 
        printf("Para o aluno 0, digite 0"); 
        printf("Para o aluno 1, digite 1"); 
        printf("Para o aluno 2, digite 2"); 

        return 0;
    }
