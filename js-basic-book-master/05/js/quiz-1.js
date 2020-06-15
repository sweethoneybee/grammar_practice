function sumMulti(a, b) {
  if (a === b) {
    return a * b;
  } else {
    return a + b;
  }
}

var num1 = parseInt(prompt("첫 번째 숫자 입력"));
var num2 = parseInt(prompt("두 번째 숫자 입력"));
var result = sumMulti(num1, num2);

alert(result);
