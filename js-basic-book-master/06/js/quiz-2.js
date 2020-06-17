var r = prompt("원의 반지름은? (cm)");
var dulae = Math.round(2 * r * Math.PI);
var wide = Math.round(r * r * Math.PI);

document.write("반지름이 " + r + "cm일 때");
document.write("원의 둘레: 약 " + dulae + "cm");
document.write("원의 넓이: 약 " + wide + "cm^2");
