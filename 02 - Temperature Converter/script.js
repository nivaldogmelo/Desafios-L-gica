function converter(grau){
	if (grau == "f") {
		document.getElementById('c').value = (document.getElementById('f').value - 32) / 1.8;
		document.getElementById('k').value = (document.getElementById('f').value / 1.8) + 459.67;
		// Por algum motivo se eu colocar direto da soma o Js concatena ao invé de somar
		document.getElementById('rk').value = document.getElementById('f').value - 0 + 459.67;
		document.getElementById('r').value = (document.getElementById('f').value - 32) / 2.25;
	};
	if (grau == "k") {
		document.getElementById('c').value = document.getElementById('k').value - 273.15;
		document.getElementById('f').value = document.getElementById('k').value * 1.8 - 459.67;
		document.getElementById('rk').value = document.getElementById('k').value * 1.8;
		document.getElementById('r').value = (document.getElementById('k').value - 273.15) * 0.8;
	};
	if (grau == "c") {
		document.getElementById('f').value = document.getElementById('c').value * 1.8 + 32;
		document.getElementById('k').value = document.getElementById('c').value - 0 + 273.15;
		document.getElementById('rk').value = document.getElementById('c').value * 1.8 + 32 + 459.67;
		document.getElementById('r').value = document.getElementById('c').value * 0.8;
	};
	if (grau == "rk") {
		document.getElementById('c').value = (document.getElementById('rk').value - 32 - 459.67) / 1.8;
		document.getElementById('f').value = document.getElementById('rk').value - 459.67;
		document.getElementById('k').value = document.getElementById('rk').value / 1.8;
		document.getElementById('r').value = (document.getElementById('rk').value - 32 - 459.67) / 2.25;
	};
	if (grau == "r") {
		document.getElementById('c').value = document.getElementById('r').value * 1.25 ;
		document.getElementById('f').value = document.getElementById('r').value * 2.25 + 32;
		document.getElementById('k').value = document.getElementById('r').value * 1.25 + 273.15 ;
		document.getElementById('rk').value = document.getElementById('r').value * 2.25 + 32 + 459.67;
	};
}