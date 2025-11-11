public class TesteAvaliacaoAluno {
    public static void main(String[] args) {
        // Cria as Dependencias
        CalculoNotas sistemaNotas = new CalculoNotas();
        Frequencias sistemaFrequencias = new Frequencias(60);

        // Cria o sistema de teste
        AvaliacaoAluno aluno = new AvaliacaoAluno("aluno_1", "POO101", sistemaNotas, sistemaFrequencias);

        // Notas: 7.0 (peso 0.4) e 5.0 (peso 0.6)
        aluno.adicionarNota(7.0, 0.4);
        aluno.adicionarNota(5.0, 0.6);

        // Registrar 10 faltas (50 presenças / 60 aulas = 83.3%)
        for (int i = 0; i < 10; i++) {
            aluno.registrarFalta();
        }

        System.out.println("=== Avaliação do Aluno ===");
        System.out.println("Média Ponderada: " + aluno.mediaPonderada());
        System.out.println("Percentual de Presença: " + (aluno.percentualPresenca() * 100) + "%");
        System.out.println("Cumpre Presença? " + aluno.cumprePresenca());
        System.out.println("Precisa Prova Final? " + aluno.precisaProvaFinal());
        System.out.println("Aprovado? " + aluno.aprovado());
    }
}