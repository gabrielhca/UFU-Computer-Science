import java.util.Vector;

public class Banco {
	// Armazena todas as contas
	Vector<Conta> contas = new Vector<>();

	// Adiciona uma nova conta ao banco
	public void adicionarConta(Conta conta) {
		contas.add(conta);
	}

	// Lista todas as contas do banco
	public void listarContas() {
		System.out.println("\nCONTAS DO BANCO");
		for (Conta conta : contas) {
			conta.imprimir();
			System.out.println("---------------------");
		}
	}
}