//Correção de código. 
//Código Errado. 
/* void preencher(float* v, int n){
    for (int i = 0; i < n; i++){
        printf("Valor %d: ", i);
        scanf("%f", &(v + i));
    }
}

void dobrar(float* origem, float* destino, int n){
    for (int k = 0; k < n; k++){
        *(destino + k) = *(origem + k) * 2.0f;
    }
}

void mostrar(float* v, int n){
    printf("Vetor: ");
    for (int j = 0; j < n; j++){
        printf("%d ", *(v + j));
    }
}

int main(){
    int N = 8;
    float* a;
    float* b = NULL;
    
    a = (float*) malloc(sizeof(float));
    b = (float*) malloc(sizeof(float) * N);
    
    preencher(&a, N);
    dobrar(a, b, N);
    mostrar(b, N);
    
    free(a); free(b);
    return 0;
} */

//Código Corrigido. 
void preencher(float* v, int n){
    for (int i = 0; i < n; i++){
        printf("Valor %d: ", i);
        scanf("%f", (v + i));
    }
}

void dobrar(float* origem, float* destino, int n){
    for (int k = 0; k < n; k++){
        *(destino + k) = *(origem + k) * 2.0;
    }
}

void mostrar(float* v, int n){
    printf("Vetor: ");
    for (int j = 0; j < n; j++){
        printf("%f ", *(v + j));
    }
}

int main() {
    int N = 8;
    float* a;
    float* b = NULL;
    
    a = (float*) malloc(N * sizeof(float));
    b = (float*) malloc(N * sizeof(float));

    preencher(a, N);
    dobrar(a, b, N);
    mostrar(b, N);
    
    free(a); free(b);
    return 0;
}