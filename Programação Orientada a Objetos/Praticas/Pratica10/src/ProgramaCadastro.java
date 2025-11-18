import java.util.InputMismatchException;
import java.util.Scanner;

public class ProgramaCadastro {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		try {
			System.out.print("Digite o seu nome: ");
			String nome = scanner.nextLine();
			System.out.print("Digite a sua idade: ");
			int idade = scanner.nextInt();
			ValidadorDeIdade.verificarMaioridade(idade);
			System.out.println("\nCadastro de " + nome + " realizado com sucesso!");
		} catch (IdadeInvalidaException e) {
			System.out.println("\nErro no cadastro: " + e.getMessage());
		} catch (InputMismatchException e) {
			System.out.println("\nErro: A idade deve ser um número inteiro.");
		} finally {
			scanner.close();
			System.out.println("Operação finalizada.");
		}
	}
}
