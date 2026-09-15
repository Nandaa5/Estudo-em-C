# Resumo Ultracompacto: Prova de C

---

## 1. Ciclo de Compilação
1. **Pré-processamento (`.c` -> `.i`):** Trata diretivas `#` e remove comentários.
2. **Compilação (`.i` -> `.s`):** Traduz para código Assembly.
3. **Montagem (`.s` -> `.obj`):** Gera binário objeto.
4. **Linkagem (`.obj` -> `.exe`):** Une código objeto e bibliotecas no executável final.

---

## 2. Identificadores & Tokens
* **Tokens:** Palavras-chave (32), identificadores, constantes, strings (com `\0`), símbolos especiais e operadores.
* **Nomes de variáveis:** Apenas letras, dígitos e `_`; começam com letra ou `_` (nunca número); *case-sensitive*; sem espaços ou palavras reservadas.

---

## 3. Tipos e Memória
* **Básicos:** `char` (1B), `short` (2B), `int` (2/4B), `long` (4B), `float` (4B), `double` (8B).
* **Derivados:** Vetor, matriz, ponteiro, struct, union.
* **`sizeof`:** Operador unário que retorna o tamanho do tipo ou variável em bytes.

---

## 4. Escopo e Armazenamento
* **`auto`:** Padrão para variáveis locais; vive na pilha (*stack*) e é destruída ao final do bloco.
* **`static` local:** Mantém o valor salvo entre chamadas da função.
* **`static` global/função:** Restringe a visibilidade apenas ao próprio arquivo.
* **`extern`:** Declara variável global definida em outro arquivo.

---

## 5. Entrada e Saída (`printf` / `scanf`)
* **`printf`:** Imprime valores diretamente (usa `&` somente com `%p` para endereços).
* **`scanf`:** Exige obrigatoriamente `&` para tipos primitivos (`int`, `float`, `char`). Vetores não usam `&`.
* **Formatos:**
  * `%d` / `%i`: Inteiro com sinal
  * `%u`: Inteiro sem sinal
  * `%f`: Float | `%lf`: Double
  * `%c`: Char | `%s`: String
  * `%o`: Octal | `%x` / `%X`: Hexadecimal
  * `%p`: Endereço de memória
  * `%8d`: Alinha à direita | `%-8d`: À esquerda | `%08d`: Zeros à esquerda | `%.2f`: 2 casas decimais

---

## 6. Os 5 Tipos de Erros
* **Sintático:** Viola regras gramaticais (falta `;`, maiúscula em palavra-chave). Barra a compilação.
* **Semântico:** Instrução sem sentido lógico para o compilador (ex: `a + b = c;`). Barra a compilação.
* **Linkedição:** Símbolo obrigatório não localizado (ex: `int Main()` com 'M' maiúsculo).
* **Lógico:** Compila e roda, mas dá resultado errado (ex: colocar `;` após `for(...)`).
* **Execução (*Run-time*):** Trava o programa durante o uso (ex: divisão por zero).

---

## 7. Arrays e Matrizes
* **Memória:** Itens homogêneos alocados contiguamente; índice inicia em `0` na menor posição de memória.
* **Matrizes:** Em declarações com inicialização, o tamanho da **segunda dimensão (colunas) é obrigatório** (`mat[][3]`).
* **Passagem para função:** Passa sempre o **endereço base** (primeiro elemento), nunca uma cópia completa.
* **Retorno seguro:** Nunca retorne array local comum (morre na pilha). Use: **passagem por ponteiro**, **`malloc`** ou array **`static`**.