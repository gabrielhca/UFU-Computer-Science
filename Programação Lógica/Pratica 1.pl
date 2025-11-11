pai(roberto, bruno).
pai(roberto, camila).
pai(bruno, lucas).
pai(bruno, thiago).
pai(marcos, roberto).

mae(sonia, bruno).
mae(sonia, camila).
mae(camila, daniel).

homem(roberto).
homem(bruno).
homem(lucas).
homem(thiago).
homem(daniel).
homem(marcos).

mulher(camila).
mulher(sonia).

filho(X,Y) :-
    pai(Y,X),
    homem(X).

filha(X,Y) :-
    mae(Y,X),
    mulher(X).

irmao(X,Y) :-
    pai(W,X),
    pai(W,Y).

avoh(X,Y) :-
    homem(X),
    pai(X,Z),
    pai(Z,Y).

avom(X,Y) :-
    mulher(X),
    mae(X,Z),
    mae(Z,Y).

% recursividade para descobrir ancestralidade
ancestral(X,Y):-
    pai(X,Y).
ancestral(X,Y):-
    pai(X,Z),
    ancestral(Z,Y).
