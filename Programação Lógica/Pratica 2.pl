/*
Atividade:
Ultilize trace para estudar as saidas do programa a seguir.
*/

f(a).
f(b).
g(a).
g(b).
h(b).
k(X) :- f(X),g(X),h(X).

/*
execução:

2 ?- trace.
true.

[trace] 2 ?- k(X).
   Call: (14) k(_18944) ? creep
   Call: (15) f(_18944) ? creep
   Exit: (15) f(a) ? creep
   Call: (15) g(a) ? creep
   Exit: (15) g(a) ? creep
   Call: (15) h(a) ? creep
   Fail: (15) h(a) ? creep
   Redo: (15) f(_18944) ? creep
   Exit: (15) f(b) ? creep
   Call: (15) g(b) ? creep
   Exit: (15) g(b) ? creep
   Call: (15) h(b) ? creep
   Exit: (15) h(b) ? creep
   Exit: (14) k(b) ? creep
X = b.
*/
