import java.util.*;

public class Aplicacao {
	private Vector<Conta> contas = new Vector<>();
	private Scanner scanner = new Scanner(System.in);

	public void executar() {
		int opcao;
		do {
			System.out.println("\nMenu");
			System.out.println("1. Registrar Nova Conta.");
			System.out.println("2. Dados do Cliente.");
			System.out.println("3. Depositar.");
			System.out.println("4. Sacar.");
			System.out.println("5. Transferir.");
			System.out.println("6. Extrato Bancario.");
			System.out.println("7. Sair.");
			opcao = Integer.parseInt(scanner.nextLine());
			switch (opcao) {
				case 1 -> adicionarConta();
				case 2 -> dadosCliente();
				case 3 -> depositar();
				case 4 -> sacar();
				case 5 -> transferir();
				case 6 -> extratoBancario();
			}
		} while (opcao != 7);
	}

	// Cria uma nova conta bancaria
	public void adicionarConta() {
		System.out.print("Nome do cliente: ");
		String nome = scanner.nextLine();
		System.out.print("Endereço: ");
		String endereco = scanner.nextLine();
// Verifica se é conta especial
		System.out.print("É conta especial (s/n)? ");
		boolean especial = scanner.nextLine().equalsIgnoreCase("s");
		System.out.print("Saldo inicial: ");
		double saldo = Double.parseDouble(scanner.nextLine());
		Cliente novoCliente = new Cliente(nome, endereco);
		Conta novaConta = new Conta(novoCliente, especial, saldo);
		contas.add(novaConta);
		System.out.println("Conta criada para " + nome);
	}

	// Busca uma conta pelo nome do titular
	private Conta buscarConta(String nome) {
		for (Conta conta : contas) {
			if (conta.titular.nome.equalsIgnoreCase(nome)) {
				return conta;
			}
		}
		return null;
	}

	// Imprime os dados de um cliente
	public void dadosCliente() {
		System.out.print("Nome do cliente: ");
		String nome = scanner.nextLine();
		Conta conta = buscarConta(nome);
		if (conta != null) {
			conta.dadosCliente();
		} else {
			System.out.println("Cliente não encontrado.");
		}
	}

	// Realiza um deposito
	public void depositar() {
		System.out.print("Nome do cliente: ");
		String nome = scanner.nextLine();
		Conta conta = buscarConta(nome);
		if (conta != null) {
			System.out.print("Valor a depositar: ");
			double valor = Double.parseDouble(scanner.nextLine());
			conta.depositar(valor);
		} else {
			System.out.println("Cliente não encontrado.");
		}
	}

	// Realiza um saque
	public void sacar() {
		System.out.print("Nome do cliente: ");
		String nome = scanner.nextLine();
		Conta conta = buscarConta(nome);
		if (conta != null) {
			System.out.print("Valor a sacar: ");
			double valor = Double.parseDouble(scanner.nextLine());
			conta.sacar(valor);
		} else {
			System.out.println("Cliente não encontrado.");
		}
	}

	// Realiza uma transferencia
	public void transferir() {
		System.out.print("Nome do cliente de origem: ");
		String nomeOrigem = scanner.nextLine();
		Conta contaOrigem = buscarConta(nomeOrigem);
		if (contaOrigem != null) {
			System.out.print("Nome do cliente de destino: ");
			String nomeDestino = scanner.nextLine();
			Conta contaDestino = buscarConta(nomeDestino);
			if (contaDestino != null) {
				System.out.print("Valor a transferir: ");
				double valor = Double.parseDouble(scanner.nextLine());
				contaOrigem.transferir(valor, contaDestino);
			} else {
				System.out.println("Cliente de destino não encontrado.");
			}
		} else {
			System.out.println("Cliente de origem não encontrado.");
		}
	}

	// Imprime o extrato bancario
	public void extratoBancario() {
		System.out.print("Nome do cliente: ");
		String nome = scanner.nextLine();
		Conta conta = buscarConta(nome);
		if (conta != null) {
			conta.imprimirExtrato();
		} else {
			System.out.println("Cliente não encontrado.");
		}
	}
}
