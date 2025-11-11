import java.util.ArrayList;
import java.util.List;

/** Mistura: controle de notas + controle de frequência. */
public class AvaliacaoAluno {
    private final String idAluno;
    private final String codigoDisciplina;

    private final CalculoNotas notas;
    private final Frequencias frequencia;

    public AvaliacaoAluno(String idAluno, String codigoDisciplina, CalculoNotas notas, Frequencias frequencia) {
        this.idAluno = idAluno;
        this.codigoDisciplina = codigoDisciplina;
        this.notas = notas;
        this.frequencia = frequencia;
    }

    // --- CHAMA OS METODOS DAS OUTRAS CLASSES ---
    public void adicionarNota(double nota, double peso) {
        notas.adicionarNota(nota, peso);
    }

    public double mediaPonderada() {
        return notas.mediaPonderada();
    }

    public boolean precisaProvaFinal() {
        return notas.precisaProvaFinal();
    }

    public void registrarFalta() {
        frequencia.registrarFalta();
    }

    public double percentualPresenca() {
        return frequencia.percentualPresenca();
    }

    public boolean cumprePresenca() {
        return frequencia.cumprePresenca();
    }

    // --- DECISÃO FINAL ---
    public boolean aprovado() {
        return notas.mediaPonderada() >= notas.getMediaAprovacao() && frequencia.cumprePresenca();
    }
}
