int quadrado (int a) {
   return a * a ;
}

int main() {
    int n1, n2 ;
    printf("Digite o valor do n1: ") ;
    scanf("%d", &n1);
    n2 = quadrado(n1);
    printf("O quadrado de %d eh %d\n",n1,n2);
    system("pause");
    return 0;
}