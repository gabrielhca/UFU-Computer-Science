package notificacoes;

public class NotificadorSMS implements Notificador {
    public void enviar(String mensagem) {
        System.out.println("Enviando SMS: " + mensagem);
    }
}
