public class ValidadorDeIdade {
	public static void verificarMaioridade(int idade) throws IdadeInvalidaException {
		if (idade < 18) {
			throw new IdadeInvalidaException("A idade mínima para cadastro é 18 anos.");
		}
	}
}
