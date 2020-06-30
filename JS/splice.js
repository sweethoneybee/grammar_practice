var tmpArr = [];

tmpArr.push("d");
tmpArr.push("e");
tmpArr.unshift("c");
tmpArr.unshift("b");
tmpArr.unshift("a");
console.log(tmpArr.shift());    // a
console.log(tmpArr.pop());      // f

tmpArr.slice(1, 3); // c, d and tmpArr: {"b", "c", "d", "e"}
tmpArr.splice(1, 3); // c, d and tmpArr: {"b", "e"}
tmpArr.splice(1, 1, "k"); // e and tmpArr: {"b", "k"};
