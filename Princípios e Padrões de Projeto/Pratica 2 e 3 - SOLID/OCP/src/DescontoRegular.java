public class DescontoRegular implements PoliticaDesconto{
    @Override
    public double calcularMensalidade(double mensalidadeBase){
        return mensalidadeBase;
    }
}
