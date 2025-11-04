#include <stdio.h>
#include <math.h>

float somar();
float subtrair();
float multiplicar();
float dividir();
float potencia();
float raizQuadrada();

int main() {
    int opcao = -1;

    do {
        printf("\n=== CALCULADORA ===\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n"); 
        printf("5. Potencia\n");
        printf("6. Raiz Quadrada\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: {
                float resultado = somar();
                printf("Resultado: %.2f\n", resultado);
                break;
            }
            case 2: {
                float resultado = subtrair();
                printf("Resultado: %.2f\n", resultado);
                break;
            }
            case 3: {
                float resultado = multiplicar();
                printf("Resultado: %.2f\n", resultado);
                break;
            }
            case 4: {
                float resultado = dividir();
                printf("Resultado: %.2f\n", resultado);
                break;
            }
            case 5: {
                float resultado = potencia();
                printf("Resultado: %.2f\n", resultado);
                break;
            }
            case 6: {
                float resultado = raizQuadrada();
                printf("Resultado: %.2f\n", resultado);
                break;
            }
            case 0:
                printf("Saindo da calculadora.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        printf("\nPressione Enter para continuar...");
        getchar(); getchar();

    } while (opcao != 0);

    return 0;
}

float somar() {
    float a, b;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    return a + b;
}

float subtrair() {
    float a, b;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    return a - b;
}

float multiplicar() {
    float a, b;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
    return a * b;
}

float dividir() {
    float a, b;
    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);

    if (b == 0) {
        printf("Erro: Divisão por zero não é permitida!\n");
        return 0.0;
    }

    return a / b;
}

float potencia() {
    float base, expoente;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite o expoente: ");
    scanf("%f", &expoente);

    return pow(base, expoente);
}

float raizQuadrada() {
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("Erro: Não existe raiz real de número negativo.\n");
        return 0.0;
    }

    return sqrt(num);
}