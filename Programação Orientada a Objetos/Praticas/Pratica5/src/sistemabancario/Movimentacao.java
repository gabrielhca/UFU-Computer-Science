package sistemabancario;

// sistemaBancario.Movimentacao.java
public class Movimentacao {
    private final String descricao;
    private final double valor;

    public Movimentacao(String descricao, double valor) {
        this.descricao = descricao;
        this.valor = valor;
    }

    public String getDescricao() {
        return descricao;
    }

    public double getValor() {
        return valor;
    }
}
