package expressoes;

public class Negative extends Expression {
    private final Expression value;

    public Negative(Expression value) {
        this.value = value;
    }

    public int evaluate() {
        return -this.value.evaluate();
    }

    public String toString() {
        return String.format(" (-%s", this.value);
    }
}
