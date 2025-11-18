import java.util.InputMismatchException;
import java.util.Scanner;

public class ProgramaConta {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Conta minhaConta = new Conta(1000.00);
		System.out.println("Bem-vindo! Saldo inicial: R$" + String.format("%.2f", minhaConta.getSaldo()));
		try {
			System.out.print("\nDigite o valor para depósito: ");
			double valorDeposito = scanner.nextDouble();
			minhaConta.depositar(valorDeposito);
			System.out.print("\nDigite o valor para saque: ");
			double valorSaque = scanner.nextDouble();
			minhaConta.sacar(valorSaque);
		} catch (IllegalArgumentException e) {
			System.out.println("\nErro na operação: " + e.getMessage());
		} catch (SaldoInsuficienteException e) {
			System.out.println("\nErro na operação: " + e.getMessage());
		} catch (InputMismatchException e) {
			System.out.println("\nErro: O valor digitado não é um número válido.");
		} finally {
			System.out.println("\nSaldo final: R$" + String.format("%.2f", minhaConta.getSaldo()));
			scanner.close();
			System.out.println("Fim do programa.");
		}
	}
}
