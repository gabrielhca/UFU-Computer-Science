package notificacoes;

public class ServicoDeAlerta {
    private final Notificador notificador;

    public ServicoDeAlerta(Notificador notificador) {
        this.notificador = notificador;
    }

    public void alertaCritico(String mensagem) {
        notificador.enviar(" Alerta Crítico: " + mensagem);
    }
}
