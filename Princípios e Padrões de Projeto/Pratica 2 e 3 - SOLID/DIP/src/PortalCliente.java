// cliente de ALTO nível (acoplado a concretos) — viola DIP
public class PortalCliente {
    private final Autenticador autenticador;
    private final Armazenamento armazenamento;

    // Inversão de dependencia, recebe as abstrações
    public PortalCliente(Autenticador autenticador, Armazenamento armazenamento) {
        this.autenticador = autenticador;
        this.armazenamento = armazenamento;
    }

    public void processar(String usuario, String senha, String arquivo) {
        // O cliente de Alto Nivel usa as abratrações
        if (!autenticador.login(usuario, senha)) {
            System.out.println("Falha de autenticação");
            return;
        }
        armazenamento.enviar(arquivo);
        System.out.println("Upload concluído!");
    }
}