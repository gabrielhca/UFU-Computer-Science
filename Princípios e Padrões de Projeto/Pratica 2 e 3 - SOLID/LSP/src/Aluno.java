public abstract class Aluno {
    protected final String id;
    protected final String nome;
    protected final double mediaFinal;

    protected Aluno(String id, String nome, double mediaFinal) {
        this.id = id; this.nome = nome; this.mediaFinal = mediaFinal;
    }

    public String getNome() { return nome; }
    public double getMediaFinal() { return mediaFinal; }

    public abstract boolean aprovado();
}