public class TesteAluno {
    public static void main(String[] args) {
        PoliticaDesconto regular = new DescontoRegular();
        PoliticaDesconto parcial = new DescontoBolsistaParcial();
        PoliticaDesconto integral = new DescontoBolsistaIntegral();
        PoliticaDesconto convenio = new DescontoConvenioEmpresa();

        Aluno a1 = new Aluno("1", "Ana Luiza", 1000.0, 30.0, regular);
        Aluno a2 = new Aluno("2", "Bruno Vinicius", 1000.0, 30.0, parcial);
        Aluno a3 = new Aluno("3", "Mario Alberto", 1000.0, 30.0, integral);
        Aluno a4 = new Aluno("4", "Maria Letica", 1000.0, 30.0, convenio);

        System.out.println("=== OCP Refatorado (Padrão Strategy) ===");
        System.out.println(a1.getNome() + " (" + a1.getTipoDesconto() + "): R$ " + a1.calcularMensalidade());
        System.out.println(a2.getNome() + " (" + a2.getTipoDesconto() + "): R$ " + a2.calcularMensalidade());
        System.out.println(a3.getNome() + " (" + a3.getTipoDesconto() + "): R$ " + a3.calcularMensalidade());
        System.out.println(a4.getNome() + " (" + a4.getTipoDesconto() + "): R$ " + a4.calcularMensalidade());
    }
}
