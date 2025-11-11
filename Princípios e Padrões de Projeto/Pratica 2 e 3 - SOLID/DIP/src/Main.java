public class Main {
    public static void main(String[] args) {
        Autenticador authBasico = new AutenticadorBasico();
        Armazenamento storageLocal = new ArmazenamentoLocal();
        PortalCliente portalBasico = new PortalCliente(authBasico, storageLocal);

        Autenticador authOAuth = new AutenticadorOAuth2();
        Armazenamento storageS3 = new ArmazenamentoS3();
        PortalCliente portalS3 = new PortalCliente(authOAuth, storageS3);

        System.out.println("--- Teste BASICO + LOCAL ---");
        portalBasico.processar("ana", "123", "relatorio.pdf");

        System.out.println("\n--- Teste OAUTH2 + S3 ---");
        portalS3.processar("marcos", "456", "documento.docx");

    }
}