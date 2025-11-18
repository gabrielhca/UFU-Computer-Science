// aqui estou criando uma classe chamada Conta com os atributos dessa classe
// public siignifica que a classe pode ser acessada em qualquer lugar do projeto
public class Conta {
	String nome;
	boolean categoriaEspecial;
	double saldo;

	// aqui temos um construtor
	// serve para iniciar os atributos do objeto
	public Conta(String n, boolean categoria, double valor) {
		nome = n;
		categoriaEspecial = categoria;
		saldo = valor;
	}

	// aqui temos um metodo, eles definem o comportamento do objeto
	public void depositar(double valor) {
		this.saldo = saldo + valor;
		System.out.println("Deposito realizado!");
	}

	public void transferir(double valor, Conta contaDestino) {
		System.out.println();
		if (categoriaEspecial) {
			this.saldo = this.saldo - valor;
			contaDestino.depositar(valor);
			System.out.println("Transferencia de R$" + valor + " para " + contaDestino.nome + " efetuada!");
		} else if (saldo >= valor) {
			this.saldo = this.saldo - valor;
			contaDestino.depositar(valor);
			System.out.println("Transferencia de R$" + valor + " para " + contaDestino.nome + " efetuada!");
		} else {
			System.out.println("Saldo insuficiente");
		}
	}

	public void saque(double valor) {
		if (categoriaEspecial) {
			this.saldo = this.saldo - valor;
			System.out.println("Saque realizado!");
		} else if (saldo >= valor) {
			this.saldo = this.saldo - valor;
			System.out.println("Saque realizado!");
		} else {
			System.out.println("Saldo insuficiente");
		}
	}

	public void imprime() {
		System.out.println();
		System.out.println("Nome: " + nome);
		System.out.println("É cliente especial? " + categoriaEspecial);
		System.out.println("Saldo: " + saldo);
	}
}