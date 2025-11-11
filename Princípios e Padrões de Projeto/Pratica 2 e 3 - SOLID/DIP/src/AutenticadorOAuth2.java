class AutenticadorOAuth2 implements Autenticador {

    public boolean login(String usuario, String senha) {
        System.out.println("[OAUTH2 ADAPTER] Convertendo credenciais para token...");
        return true;
    }
}