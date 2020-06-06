console.log("1");
window.alert("1");
function exec() {
  setTimeout(function () {
    console.log("2");
    window.alert("2");
  }, 3000);
  setTimeout(function () {
    console.log("3");
    window.alert("3");
  }, 0);
  console.log("4");
  window.alert("4");
  setTimeout(function () {
    console.log("5");
    window.alert("5");
  }, 1000);
}
exec();
