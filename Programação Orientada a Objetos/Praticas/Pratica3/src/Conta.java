import java.util.Vector;

public class Conta {
	Cliente titular;
	boolean categoriaEspecial;
	double saldo;
	String tipoConta = "Corrente";
	Vector<Movimentacao> extrato;

	public Conta(Cliente titular, boolean categoriaEspecial,
	             double valor) {
		this.titular = titular;
		this.categoriaEspecial = categoriaEspecial;
		this.saldo = valor;
		this.extrato = new Vector<Movimentacao>();
		extrato.add(new Movimentacao("Abertura", saldo));
	}

	// metodo para depositar dinheiro
	public void depositar(double valor) {
		saldo = saldo + valor;
		extrato.add(new Movimentacao("Deposito", valor));
		System.out.println("Deposito de R$" + valor + " realizado!");
	}

	// metodo para sacar dinheiro
	public void saque(double valor) {
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
			extrato.add(new Movimentacao("Transferência para " +
					destino.titular.nome, -valor));
			destino.extrato.add(new Movimentacao("Transferência de " +
					titular.nome, valor));
			System.out.println("Transferência de R$" + valor + " para " +
					destino.titular.nome + " efetuada!");
		} else {
			System.out.println("Saldo insuficiente");
		}
	}

	// Imprime os dados básicos da conta
	public void imprimir() {
		System.out.println("Titular: " + titular.nome);
		System.out.println("Endereço: " + titular.endereco);
		System.out.println("Saldo: R$ " + saldo);
		if (categoriaEspecial) {
			System.out.println("Tipo: Especial");
		} else {
			System.out.println("Tipo: Normal");
		}
	}

	// Imprime o extrato da conta
	public void imprimirExtrato() {
		System.out.println("\nEXTRATO DA CONTA DE " + titular.nome);
		for (Movimentacao mov : extrato) {
			System.out.printf("%-25s %10.2f\n", mov.descricao, mov.valor);
		}
		System.out.printf("\n%-25s %10.2f\n", "SALDO", saldo);
	}
}