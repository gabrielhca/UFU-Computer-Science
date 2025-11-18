import expressoes.*;
import notificacoes.*;

public class Main {
    public static void main(String[] args) {
        // aqui é usado polimorfismo para tratar cada
        // expressão como um subtipo de expressoes.Expression
        Expression tres = new Constant(3);
        Expression quatro = new Constant(4);
        Expression sete = new Constant(7);
        Expression oito = new Constant(8);
        Expression adicao = new Addition(oito, tres);
        Expression multiplicacao = new Multiplication(sete, quatro);
        Expression negativo = new Negative(multiplicacao);
        Expression expressaoFinal = new Subtraction(adicao, negativo);
        System.out.println("Expressão: " + expressaoFinal);
        System.out.println("Resultado: " + expressaoFinal.evaluate());
        // Notificacoes
        ServicoDeAlerta email = new ServicoDeAlerta(new NotificadorEmail());
        ServicoDeAlerta sms = new ServicoDeAlerta(new NotificadorSMS());
        ServicoDeAlerta push = new ServicoDeAlerta(new NotificadorPush());
        email.alertaCritico("Falha no servidor principal!");
        sms.alertaCritico("Acesso não autorizado detectado!");
        push.alertaCritico("Sistema de backup offline!");
    }
}
