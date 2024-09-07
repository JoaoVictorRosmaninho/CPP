
## Serialize 
    - Recebe 
        - Data* 
    
    - retorna
        - uintptr_t

## DeSerialize 
    - Recebe 
        - uintptr_t
    
    - retorna
        - Data*


Qual a relacao entre uintptr_t e Data*


Tentando sem ler sobre: 
    Primeiro pensamento: 
        - Data* pode ser convertido pra um uintptr_t atraves do static_cast e retornado na funcao serialize
        - Na funcao de deserialize, o inverso is feito
    
    Resultado 
        - Nao funcionou, invalid cast 

    Objetivo:
        1. Conseguir serializar uma estrutra de dados qualquer

Levantando informacoes sobre o problema 
    Material selecionado:
        - https://blog.feabhas.com/2024/02/navigating-memory-in-c-a-guide-to-using-stduintptr_t-for-address-handling/
    
    - Perguntas 
        - Oque é Serializacao ? 
        - O que é uintptr_t ? 
        - O que é reinterpret_cast ? 
        - Para que serve ?
        - Exemplos de uso 
        - Casos de uso 

    - Respostas 
        - Oque é Serializacao ? 
            - Serialização é o processo de tradução de estruturas de dados ou estado de objeto em um formato que possa ser armazenado e reconstruído posteriormente no mesmo ou em outro ambiente computacional.
        - O que é uintptr_t ? 



    
 
