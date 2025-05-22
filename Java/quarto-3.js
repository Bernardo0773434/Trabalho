function alterarPreco_1() {
    // obter o elemento de preço
    var precoElement = document.getElementById("preco");

    // obter o preço atual
    var precoAtual = precoElement.innerHTML;

    // gerar um novo preço aleatório
    var novoPreco = Math.floor(Math.random() + 250);

    // atualizar o elemento de preço
    precoElement.innerHTML = novoPreco + ",00€";
  }

  function alterarPreco_2() 
  {
    var precoElement = document.getElementById("preco");

    var precoAtual = precoElement.innerHTML;

    var novoPreco = Math.floor(Math.random() + 300);

    precoElement.innerHTML = novoPreco + ",00€";
  }

  function alterarPreco_3() 
  {
    var precoElement = document.getElementById("preco");

    var precoAtual = precoElement.innerHTML;

    var novoPreco = Math.floor(Math.random() + 350);

    precoElement.innerHTML = novoPreco + ",00€";
  }

  function alterarPreco_4() 
  {
    var precoElement = document.getElementById("preco");

    var precoAtual = precoElement.innerHTML;

    var novoPreco = Math.floor(Math.random() + 400);

    precoElement.innerHTML = novoPreco + ",00€";
  }

  function alterarPreco_5() 
  {
    var precoElement = document.getElementById("preco");

    var precoAtual = precoElement.innerHTML;

    var novoPreco = Math.floor(Math.random() + 450);

    precoElement.innerHTML = novoPreco + ",00€";
  }

  function alterarPreco_6() 
  {
    var precoElement = document.getElementById("preco");

    var precoAtual = precoElement.innerHTML;

    var novoPreco = Math.floor(Math.random() + 500);

    precoElement.innerHTML = novoPreco + ",00€";
  }

  function alterarPreco_7() 
  {
    var precoElement = document.getElementById("preco");

    var precoAtual = precoElement.innerHTML;

    var novoPreco = Math.floor(Math.random() + 550);

    precoElement.innerHTML = novoPreco + ",00€";
  }

  function Reservar()
  {
    var enviar = document.getElementById("enviar").value;
    alert("Reserva feita com sucesso !");
    
  }

  function limpar() 
  {
    var precoElement = document.getElementById("preco");

    var precoAtual = precoElement.innerHTML;

    var novoPreco = Math.floor(Math.random() * 0);

    precoElement.innerHTML = novoPreco + ",00€";
  }