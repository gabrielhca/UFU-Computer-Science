public class DescontoConvenioEmpresa implements PoliticaDesconto {
    private final double taxaServico = 15.0;

    @Override
    public double calcularMensalidade(double mensalidadeBase) {
        double mensalidade = mensalidadeBase * 0.80;
        return mensalidade + taxaServico;
    }
}
