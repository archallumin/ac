for (let k = 0; k < 100; k++) {
  let res = "";
  for (let i = 0; i < 300; i++)
    res += String.fromCharCode(
      Math.floor(
        Math.random() * ("0".charCodeAt(0) - "}".charCodeAt(0)) +
          "%".charCodeAt(0)
      )
    );
  console.log(res);
}
