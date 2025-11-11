public interface PoliticaDesconto {
    // A unica responsabilidade é calcular a mensalidade.
    double calcularMensalidade(double mensalidadeBase);
}