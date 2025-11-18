public class TestesManuais {
	public void executarTestes() {
		System.out.println("Iniciando testes manuais do sistema bancário...\n");
		Cliente gabriel = new Cliente("Gabriel Rodrigues", "Rua A, 123");
		Cliente monica = new Cliente("Monica Wanille", "Rua B, 456");
		Cliente maria = new Cliente("Maria João", "Rua C, 789");
// Criação de contas
		Conta contaGabriel = new Conta(gabriel, true, 1000.0);
		Conta contaMonica = new Conta(monica, false, 500.0);
		Conta contaMaria = new Conta(maria, true, 2000.0);
// Teste de depósito
		System.out.println("--- Teste de Depósito ---");
		contaMonica.depositar(200.0);
		contaMonica.imprimirExtrato();
// Teste de saque (saldo suficiente)
		System.out.println("\n--- Teste de Saque (saldo suficiente) ---");
		contaGabriel.sacar(300.0);
		contaGabriel.imprimirExtrato();
// Teste de saque (saldo insuficiente, conta normal)
		System.out.println("\n--- Teste de Saque (saldo insuficiente, conta normal) ---");
		contaMonica.sacar(1000.0);
		contaMonica.imprimirExtrato();
// Teste de saque (saldo insuficiente, conta especial)
		System.out.println("\n--- Teste de Saque (saldo insuficiente, conta especial) ---");
		contaGabriel.sacar(1500.0);
		contaGabriel.imprimirExtrato();
// Teste de transferência (saldo suficiente)
		System.out.println("\n--- Teste de Transferência (saldo suficiente) ---");
		contaMaria.transferir(500.0, contaGabriel);
		contaMaria.imprimirExtrato();
		contaGabriel.imprimirExtrato();
// Teste de transferência (saldo insuficiente, conta normal)
		System.out.println("\n--- Teste de Transferência (saldo insuficiente, conta normal) ---");
		contaMonica.transferir(800.0, contaMaria);
		contaMonica.imprimirExtrato();
		contaMaria.imprimirExtrato();
// Teste de transferência (saldo insuficiente, conta especial)
		System.out.println("\n--- Teste de Transferência (saldo insuficiente, conta especial) ---");
		contaGabriel.transferir(3000.0, contaMonica);
		contaGabriel.imprimirExtrato();
		contaMonica.imprimirExtrato();
// Teste de dados do cliente
		System.out.println("\n--- Teste de Dados do Cliente ---");
		contaMaria.dadosCliente();
		System.out.println("\nTestes manuais concluídos.");
	}
}
