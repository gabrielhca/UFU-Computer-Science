class AutenticadorBasico implements Autenticador {

    public boolean login(String usuario, String senha) {
        System.out.println("[BÁSICO] Autenticando " + usuario);
        return "123".equals(senha);
    }

}
