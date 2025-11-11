# Gerenciador de Tarefas em Haskell

Um pequeno gerenciador de tarefas escrito em Haskell. O projeto permite criar, organizar, consultar e modificar tarefas. As tarefas podem ser categorizadas, ter prioridade e tags; os dados são persistidos em arquivos para uso entre sessões.

## Autores

- Davi Paiva Sendin
- Gabriel Fachini
- Gabriel Henrique Carneiro Amorim

## Estrutura do projeto

O código está separado em módulos, com responsabilidades claras:

- `Tipos.hs`: definições dos tipos (Status, Prioridade, Categoria, Tarefa).
- `Funcoes.hs`: lógica do programa (criação, edição, busca e manipulação de tarefas).
- `Persistencia.hs`: funções para salvar e carregar tarefas de/para arquivos.
- `Testes.hs`: testes manuais e propriedades para QuickCheck.
- `Main.hs` (em `app/`): interface de terminal que expõe o menu de uso.

## Requisitos

- GHC (Glasgow Haskell Compiler)
- Cabal (ferramenta de build e dependências)

As dependências do projeto são gerenciadas pelo `cabal`.

## Compilação e execução (Linux)

1. Instale GHC e Cabal se necessário:

```sh
sudo apt update
sudo apt install ghc cabal-install
```

2. Abra um terminal na pasta do projeto (onde está o arquivo `.cabal`):

```sh
cd agendaHaskell
cabal update
```

3. Compile e execute:

```sh
cabal build
cabal run
```

`cabal run` compila e executa o binário principal — é a forma recomendada durante o desenvolvimento.

## Uso básico

Ao iniciar será mostrado um menu com opções para carregar/salvar arquivos, adicionar/remover tarefas, marcar como concluídas, listar e filtrar por categoria/prioridade/tags, gerar relatórios e executar testes.

Basta digitar o número da opção desejada e pressionar Enter.

## Funcionalidades principais

- CRUD de tarefas (criar, ler, atualizar e remover)
- Filtragem por categoria, prioridade e tags
- Ordenação por prioridade
- Verificação de tarefas atrasadas e cálculo de prazos
- Persistência em arquivo (formato baseado em `show`/`read`)
- Relatórios simples e geração de estatísticas

## Observações

- O formato de arquivo usado para salvar tarefas deve corresponder ao gerado pela função de salvamento do programa.
- Por padrão o programa tenta carregar `tarefas.txt` na inicialização (se existir).

## Testes

O projeto inclui testes manuais e propriedades para QuickCheck no módulo `Testes.hs`.


