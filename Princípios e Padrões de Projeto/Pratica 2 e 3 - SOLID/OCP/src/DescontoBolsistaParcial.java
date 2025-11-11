public class DescontoBolsistaParcial implements PoliticaDesconto{
    @Override
    public double calcularMensalidade(double mensalidadeBase) {
        return  mensalidadeBase * 0.5;
    }
}
