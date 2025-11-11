public class AlunoEAD extends Aluno {
    private final int atividadesPrevistas;
    private final int atividadesEntregues;

    public AlunoEAD(String id, String nome, double mediaFinal, int atividadesPrevistas, int atividadesEntregues) {
        super(id, nome, mediaFinal);
        this.atividadesPrevistas = atividadesPrevistas; this.atividadesEntregues = atividadesEntregues;
    }

    public double taxaParticipacao() {
        if (atividadesPrevistas == 0) return 1.0;
        return (double) atividadesEntregues / atividadesPrevistas;
    }

    // Implementa a regra de aprovação
    @Override
    public boolean aprovado() {

        return this.mediaFinal >= 7.0 && taxaParticipacao() >= 0.5;
    }
}