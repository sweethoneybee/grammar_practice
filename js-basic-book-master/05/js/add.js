var num1 = parseInt(prompt("첫 번째 숫자는? "));
var num2 = parseInt(prompt("두 번째 숫자는? "));

addNumber = (function (a, b) {
  return a + b;
})(num1, num2);

alert(addNumber);
