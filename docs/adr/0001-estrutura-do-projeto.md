# ADR-0001: Estrutura do projeto

- **Status:** Aceito
- **Data:** 07/09/2026
- **Decisores:** Rodrigo Silva

## Contexto

O projeto será desenvolvido como um ambiente integrado
para estudos de Física, Física de Dados e Ciência de Dados.

O mesmo será utilizado em mais de uma plataforma e deverá
permitir evolução contínua do material.

## Decisão

Decidi estruturar o projeto seguindo modularização de temas que sao fundamentais em aplicação de exercicios e testes. A documentacao do projeto foi modularizada contendo uma sessao de ADR(**Architecture Decision Record**)

## Consequências

Com base nos temas relacionados a Física organizamos um projeto em dominios diferentes porem correlacionados que vão gerar subdivisao nos seguintes temas:

```text
Fisica_de_Dados/
├── modules
    ├── ai
    ├── data
    ├── phisics
    ├── viz
```

### Positivas

- Organização modular.
- Facilidade de navegação.
- Facilidade para publicação futura.
- Separação entre teoria, dados e projetos.

### Negativas

- Maior quantidade de diretórios.
- Necessidade de manter uma convenção de organização.

## Alternativas consideradas


Manter todo o material em uma única estrutura.

## Motivo da decisão

A estrutura modular facilita a evolução do projeto
e a futura publicação do material em um portal web.