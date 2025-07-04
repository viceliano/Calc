<h1 align="center">🧮 Calculadora CLI em C</h1>

<p align="center">
  <img src="https://img.shields.io/badge/linguagem-C-blue?style=for-the-badge&logo=c" />
  <img src="https://img.shields.io/badge/compilador-GCC-green?style=for-the-badge&logo=gnu" />
  <img src="https://img.shields.io/badge/status-Concluído-success?style=for-the-badge" />
</p>

---

💡 **Descrição**

Este projeto é uma calculadora desenvolvida em linguagem **C**, executada via terminal. O foco está na aplicação de boas práticas, código modularizado e domínio dos fundamentos da linguagem. A aplicação realiza as quatro operações básicas (**adição**, **subtração**, **multiplicação**, **divisão**) com resultado interativo e colorido, utilizando **ANSI Escape Codes** para realce no terminal.

---

📐 **Detalhes Técnicos**

- 📦 **Linguagem**: C (padrão C99)
- ⚙️ **Compilador**: GCC
- 🔄 **Estrutura de controle**: `while`, `switch`, `if`
- 🔧 **Funções**: separadas por operação matemática
- 🧾 **Arquivo externo**: `historico.txt` salvo com cada operação
- 🎨 **Interface CLI**: Cores com ANSI Escape Codes
- 🚫 **Tratamento de erro**: divisão por zero e opções inválidas
- 🗃️ **Versionamento**: Git

---

🛠️ **Compilação e Execução**

```bash
gcc calculadora.c -o calculadora
./calculadora

📂 Exemplo de Execução

====== CALCULADORA ======
1 - Adição (+)
2 - Subtração (-)
3 - Multiplicação (*)
4 - Divisão (/)
0 - Sair
Opção: 1
Digite o primeiro número: 10
Digite o segundo número: 5
🧮 Resultado: 15.00

Arquivo gerado automaticamente:

10.00 + 5.00 = 15.00


🎯 Objetivo do Projeto

Este projeto reforça conhecimentos essenciais da linguagem C, como entrada e saída de dados c/
scanf e printf, criação de funções com retorno, uso de estruturas de controle (while, switch),
manipulação de arquivos com fopen, fprintf, fclose, além da prática de escrever código limpo, 
organizado e com propósito funcional.

Mesmo sendo uma aplicação simples, ela representa domínio das bases da linguagem, 
foco em clareza de código e preparação para aplicações maiores.

👤 Autor

Viceliano
🎓 Estudante de Análise e Desenvolvimento de Sistemas
💻 Programador focado em C, Python e automações para Linux
🔗 GitHub.com/viceliano