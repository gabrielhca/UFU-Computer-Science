public class ClienteEmail implements ComunicadorEmail {

    public void enviarEmail(String destinatario, String mensagem) {
        System.out.println("Enviando e-mail para " + destinatario + ": " + mensagem);
    }

}