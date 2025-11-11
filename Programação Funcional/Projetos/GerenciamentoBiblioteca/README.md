# Sistema de Gerenciamento de Biblioteca em Haskell

Este projeto implementa um sistema de gerenciamento de biblioteca com funcionalidades para cadastro de livros e usuários, empréstimos, devoluções e geração de relatórios. Foi desenvolvido em Haskell pelos alunos:

- Davi Paiva Sendin
- João Paulo Costa Amui
- Gabriel Henrique Carneiro Amorim
- Gabriel Fachini

## Funcionalidades principais

- Cadastro de livros: título, autor, ano e número de exemplares. Cada livro recebe um ID único.
- Cadastro de usuários: nome, matrícula (campo único no sistema) e e-mail; há validação básica de matrícula e e-mail.
- Empréstimos: registro de empréstimos com verificação de disponibilidade e cálculo automático da data de devolução (14 dias).
- Devoluções: atualiza disponibilidade e, quando houver fila de espera, empresta automaticamente para o próximo usuário.
- Lista de espera por livro: usuários podem entrar na fila quando não há exemplares disponíveis.
- Relatórios: livros emprestados, usuários com empréstimos em atraso e fila de espera por livro.
- Persistência: dados salvos em arquivos de texto (`livros.txt` e `usuarios.txt`) entre execuções.

## Como executar

O projeto usa Cabal. A partir do diretório `GerenciamentoBiblioteca/`:

1. Instale/atualize dependências (primeira vez):

```sh
cabal update
cabal build --only-dependencies
```

2. Rodar em modo desenvolvimento:

```sh
cabal run
```

`cabal run` compila (se necessário) e executa o binário principal.

Se preferir gerar um executável isolado, é possível usar `cabal build` e executar o binário gerado em `dist-newstyle`.

## Estrutura do projeto

Arquivos principais:

- `app/Main.hs`: função `main`, inicialização, carregamento de dados e menu de interação.
- `src/Funcoes.hs`: lógica de negócios — cadastro, empréstimos, devoluções, relatórios e manipulação da fila.
- `src/Tipos.hs`: definições de `Usuario`, `Livro` e `Emprestimo`.
- `src/Exemplos.hs`: exemplos e dados de suporte (quando aplicável).

## Persistência de dados

Os dados de livros e usuários são armazenados em arquivos de texto gerados pelo `show`/`read` dos tipos. Por padrão o programa tenta carregar `livros.txt` e `usuarios.txt` na inicialização; se não existirem, são criados vazios.



