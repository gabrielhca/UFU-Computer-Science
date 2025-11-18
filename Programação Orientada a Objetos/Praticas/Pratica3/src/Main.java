public class Main {
	public static void main(String[] args) {
		// cria o banco
		Banco banco = new Banco();

		// cria clientes
		Cliente joao = new Cliente("João", "Rua A, 123");
		Cliente maria = new Cliente("Maria", "Rua B, 456");

		// cria contas (true = conta especial)
		Conta contaJoao = new Conta(joao, true, 500.0);
		Conta contaMaria = new Conta(maria, false, 850.0);

		// registra contas no banco
		banco.adicionarConta(contaJoao);
		banco.adicionarConta(contaMaria);

		// realiza operações bancarias:
		contaJoao.depositar(200.0);
		contaMaria.saque(150.0);
		contaJoao.transferir(100.0, contaMaria);

		// imprime extratos
		contaJoao.imprimirExtrato();
		contaMaria.imprimirExtrato();

		// lista todas as contas do banco
		banco.listarContas();
	}
}