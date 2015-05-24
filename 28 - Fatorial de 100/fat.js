function fat (x) {
	if (x==1) {
		return x;
	}
	else {
		return (x*fat(x-1));
	}
}
z=fat(100);
console.log(z);