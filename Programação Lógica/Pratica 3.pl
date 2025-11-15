% Considere uma Base de Conhecimento contendo os predicados telefone/2, visita/2 e emCasa/1:
% Acrescente acompanhada/1, inconsistente/0, emCasaDe/2, contato/2 e festeiro/1.

% telefone(P, T) :-
% o n. de telefone da casa da pessoa P e’ T.
telefone(maria, 123).
telefone(joaquim, 234).
telefone(marco, 345).
telefone(pedro, 456).
telefone(ana, 567).
telefone(juliana, 678).
% visita(X, Y) :-
% a pessoa X esta’ visitando a pessoa Y.
visita(juliana, maria).
visita(ana, joaquim).
visita(marco, juliana).
visita(pedro, juliana).
% visita(maria, marco).
% emCasa(X) :- X esta’ em casa.
emCasa(joaquim).
emCasa(maria).
emCasa(juliana).
% sabemos que uma pessoa P esta acompanhada se ela tem visitas
acompanhada(X) :-
	visita(_, X),
	emCasa(X).
% alguem não pode estar em casa e visitando alguem ao mesmo tempo
inconsistente(X) :-
	emCasa(X),
	visita(X,_).
% suponha que alguem que recebeu visitas e foi visitar outro alguem levando suas visitas junto
% caso base
emCasaDe(X,Y) :-
	visita(X,Y),
	emCasa(Y).
% caso recursivo
emCasaDe(X,Y) :-
	visita(X,Z),
	emCasaDe(Z,Y).
% qual o numero de telefone onde cada pessoa pode ser alcançada
contato(X,Y) :-
	emCasa(X),
	telefone(X,Y).
contato(X,Y) :-
	emCasaDe(X,Z),
	telefone(Z,Y).
% tres ou mais pessoas em uma casa indica uma festa
festeiro(X):-
	emCasa(X),
	visita(Z,X),
	visita(T,X),
	Z\=T.
