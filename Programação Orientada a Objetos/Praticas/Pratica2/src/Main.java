public class Main {
	public static void main(String[] args) {
		Conta c1 = new Conta("Joao", true, 500.0);
		Conta c2 = new Conta("Maria", false, 850.0);
		// imprime informações iniciais
		c1.imprime();
		c2.imprime();
		// demostração deposito
		c1.depositar(150.0);
		c1.imprime();
		// cliente normal tenta retirar valor superior ao saldo
		c2.saque(1000.0);
		c2.imprime();
		// cliente especial tenta retirar valor superior ao saldo
		c1.saque(1000.0);
		c1.imprime();
		// transferencia entre contas
		c2.transferir(200.0, c1);
		c1.imprime();
		c2.imprime();
		// transferencia sem saldo
		c2.transferir(1000.0, c1);
		c1.imprime();
		c2.imprime();
	}
}