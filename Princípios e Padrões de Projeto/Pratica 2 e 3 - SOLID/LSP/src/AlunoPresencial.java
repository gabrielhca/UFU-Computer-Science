public class AlunoPresencial extends Aluno {
    private final int totalAulas;
    private final int faltas;

    public AlunoPresencial(String id, String nome, double mediaFinal, int totalAulas, int faltas) {
        super(id, nome, mediaFinal);
        this.totalAulas = totalAulas; this.faltas = faltas;
    }

    public double percentualPresenca() {
        if (totalAulas == 0) return 1.0;
        return 1.0 - ((double) faltas / totalAulas);
    }

    // Implementa a regra de aprovação
    @Override
    public boolean aprovado() {
        return this.mediaFinal >= 6.0 && percentualPresenca() >= 0.75;
    }
}