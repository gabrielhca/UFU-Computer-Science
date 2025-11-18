package notificacoes;

public class NotificadorPush implements Notificador {
    public void enviar(String mensagem) {
        System.out.println("Enviando push notification: " + mensagem);
    }
}
