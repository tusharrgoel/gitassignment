const express = require("express");

const app = express();

app.listen(3000, (req, res) => {
  console.log("Server is running at port");
});

app.get("/", (req, res) => {
  getAge(2002);
  isValidVoter(2000);
});
function getAge(birthYear) {
  const age = 2024 - birthYear;
  console.log(age);
}
function isValidVoter(birthYear) {
  const age = 2024 - birthYear;
  console.log(age > 21 ? "Eligible to vote" : "Not eligible to vote");
}
