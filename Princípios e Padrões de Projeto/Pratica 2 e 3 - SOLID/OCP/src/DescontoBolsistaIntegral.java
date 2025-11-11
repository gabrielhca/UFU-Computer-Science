public class DescontoBolsistaIntegral implements PoliticaDesconto{
    @Override
    public double calcularMensalidade(double mensalidadeBase) {
        return  mensalidadeBase * 0;
    }
}
