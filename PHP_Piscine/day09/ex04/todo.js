const express = require("express");
const fs = require("fs");

const app = express();

app.get("/", (req, res) => {
	res.sendFile("index.html");
});

require("./delete");
require("./insert");
require("./select");

app.listen(3000, () => {
	console.log(`connected to http://localhost:3000`);
});
