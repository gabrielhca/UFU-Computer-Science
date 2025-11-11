// Classe Aluno fechada para modificação e aberta para extensão.
public class Aluno {
    private final String id;
    private final String nome;
    private final double mensalidadeBase;
    private final double taxaAdministrativa;

    // A classe passa a armazena a interface, não a implementação
    private final PoliticaDesconto politicaDesconto;

    public Aluno(String id, String nome, double mensalidadeBase, double taxaAdministrativa, PoliticaDesconto politicaDesconto) {
        this.id = id;
        this.nome = nome;
        this.mensalidadeBase = mensalidadeBase;
        this.taxaAdministrativa = taxaAdministrativa;
        this.politicaDesconto = politicaDesconto;
    }

    public double calcularMensalidade() {
        double principal = politicaDesconto.calcularMensalidade(mensalidadeBase);
        return principal + taxaAdministrativa;
    }

    public String getNome() {
        return nome;
    }

    public String getTipoDesconto() {
        return politicaDesconto.getClass().getSimpleName();
    }
}