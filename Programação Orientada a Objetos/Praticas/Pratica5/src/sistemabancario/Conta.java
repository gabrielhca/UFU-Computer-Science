package sistemabancario;

import java.util.Vector;

public class Conta {
    private final Cliente titular;
    private final boolean categoriaEspecial;
    private double saldo;
    private final Vector<Movimentacao> extrato;

    public Cliente getTitular() {
        return titular;
    }

    public double getSaldo() {
        return saldo;
    }

    public Conta(Cliente titular, boolean categoriaEspecial, double valor) {
        this.titular = titular;
        this.categoriaEspecial = categoriaEspecial;
        this.saldo = valor;
        this.extrato = new Vector<>();
        extrato.add(new Movimentacao("Abertura", saldo));
    }

    // Imprime os dados básicos da conta
    public void dadosCliente() {
        System.out.println("\nTitular: " + titular.getNome());
        System.out.println("Endereço: " + titular.getEndereco());
        System.out.println("Saldo: R$ " + saldo);
        if (categoriaEspecial) {
            System.out.println("Tipo: Especial");
        } else {
            System.out.println("Tipo: Normal");
        }
    }

    // metodo para depositar dinheiro
    public void depositar(double valor) {
        saldo = saldo + valor;
        extrato.add(new Movimentacao("Deposito", valor));
        System.out.println("Deposito de R$" + valor + " realizado!");
    }

    // metodo para sacar dinheiro
    public void sacar(double valor) {
        if (categoriaEspecial || saldo >= valor) {
            this.saldo -= valor;
            extrato.add(new Movimentacao("Saque", -valor));
            System.out.println("Saque de R$" + valor + " realizado!");
        } else {
            System.out.println("Saldo insuficiente");
        }
    }

    // Transfere valor para outra conta
    public void transferir(double valor, Conta destino) {
        if (categoriaEspecial || saldo >= valor) {
            saldo -= valor;
            destino.saldo += valor;
            extrato.add(new Movimentacao("Transferencia para " + destino.titular.getNome(), -valor));
            destino.extrato.add(new Movimentacao("Transferencia de " + titular.getNome(), valor));
            System.out.println("Transferencia de R$" + valor + " realizada!");
        } else {
            System.out.println("Saldo insuficiente!");
        }
    }

    // Imprime o histórico completo de movimentacoes
    public void imprimirExtrato() {
        System.out.println("\nExtrato");
        System.out.println("sistemaBancario.Cliente: " + titular.getNome());
        for (Movimentacao mov : extrato) {
            System.out.println("- " + mov.getDescricao() + ": " + mov.getValor());
        }
        System.out.println("Saldo atual: R$ " + saldo);
    }
}
