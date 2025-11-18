public class Conta {
	private double saldo;

	public Conta(double saldoInicial) {
		this.saldo = saldoInicial;
	}

	public double getSaldo() {
		return saldo;
	}

	public void depositar(double valor) {
		if (valor < 0) {
			throw new IllegalArgumentException("O valor do depósito não pode ser negativo.");
		}
		this.saldo += valor;
		System.out.println("Depósito de R$" + String.format("%.2f", valor) + " realizado com sucesso.");
	}

	public void sacar(double valor) throws SaldoInsuficienteException {
		if (valor > this.saldo) {
			throw new SaldoInsuficienteException("Saldo insuficiente para realizar o saque de R$" + String.format("%.2f", valor));
		}
		this.saldo -= valor;
		System.out.println("Saque de R$" + String.format("%.2f", valor) + " realizado com sucesso.");
	}
}
