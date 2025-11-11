class ArmazenamentoS3 implements Armazenamento {

    @Override
    public void enviar(String caminhoArquivo) {
        System.out.println("[S3] Enviando para bucket: " + caminhoArquivo);
    }
}
