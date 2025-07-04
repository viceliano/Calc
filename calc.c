#include <stdio.h>
#include <stdlib.h>

// Códigos de cor ANSI
#define RESET   "\033[0m"
#define GREEN   "\033[1;32m"
#define RED     "\033[1;31m"
#define CYAN    "\033[1;36m"
#define YELLOW  "\033[1;33m"

// Funções matemáticas
float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf(RED "⚠️  Erro: divisão por zero!\n" RESET);
        return 0;
    }
}

// Função para registrar a operação no arquivo
void registrarHistorico(char operador, float a, float b, float resultado) {
    FILE *arquivo = fopen("historico.txt", "a");
    if (arquivo == NULL) {
        printf(RED "❌ Erro ao abrir o arquivo de histórico.\n" RESET);
        return;
    }
    fprintf(arquivo, "%.2f %c %.2f = %.2f\n", a, operador, b, resultado);
    fclose(arquivo);
}

int main() {
    int opcao;
    float num1, num2, resultado;
    char operador;

    while (1) {
        printf(CYAN "\n====== CALCULADORA ======\n" RESET);
        printf(GREEN "Escolha a operação:\n" RESET);
        printf("1 - Adição (+)\n");
        printf("2 - Subtração (-)\n");
        printf("3 - Multiplicação (*)\n");
        printf("4 - Divisão (/)\n");
        printf("0 - Sair\n");
        printf(YELLOW "Opção: " RESET);
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf(CYAN "Encerrando a calculadora. Até logo!\n" RESET);
            break;
        }

        if (opcao < 1 || opcao > 4) {
            printf(RED "❌ Opção inválida. Tente novamente.\n" RESET);
            continue;
        }

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch(opcao) {
            case 1:
                resultado = somar(num1, num2);
                operador = '+';
                break;
            case 2:
                resultado = subtrair(num1, num2);
                operador = '-';
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                operador = '*';
                break;
            case 4:
                resultado = dividir(num1, num2);
                operador = '/';
                break;
        }

        printf(GREEN "🧮 Resultado: %.2f\n" RESET, resultado);
        registrarHistorico(operador, num1, num2, resultado);
    }

    return 0;
}