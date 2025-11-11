class ArmazenamentoLocal implements Armazenamento {
    public void enviar(String caminhoArquivo) {
        System.out.println("[LOCAL] Salvando arquivo em disco: " + caminhoArquivo);
    }
}