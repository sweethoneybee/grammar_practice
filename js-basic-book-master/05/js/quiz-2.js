compareNum = function (a, b) {
  var bigger;
  var smaller;

  if (a > b) {
    bigger = a;
    smaller = b;
  } else {
    bigger = b;
    smaller = a;
  }

  alert(bigger + "가 " + smaller + "보다 큽니다.");
};

var num1 = parseInt(prompt("바교할 첫 번째 숫자"));
var num2 = parseInt(prompt("비교할 두 번째 숫자"));
compareNum(num1, num2);
