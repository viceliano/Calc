#include <stdio.h>

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
        printf("⚠️ Erro: divisão por zero!\n");
        return 0;
    }
}

int main() {
    int opcao;
    float num1, num2, resultado;

    while (1) {
        printf("\n====== CALCULADORA ======\n");
        printf("Escolha a operação:\n");
        printf("1 - Adição (+)\n");
        printf("2 - Subtração (-)\n");
        printf("3 - Multiplicação (*)\n");
        printf("4 - Divisão (/)\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando a calculadora. Até logo!\n");
            break;
        }

        if (opcao < 1 || opcao > 4) {
            printf("❌ Opção inválida. Tente novamente.\n");
            continue;
        }

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch(opcao) {
            case 1:
                resultado = somar(num1, num2);
                break;
            case 2:
                resultado = subtrair(num1, num2);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                break;
            case 4:
                resultado = dividir(num1, num2);
                break;
        }

        printf("🧮 Resultado: %.2f\n", resultado);
    }

    return 0;
}