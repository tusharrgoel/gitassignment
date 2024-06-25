function getAge(birthYear) {
  const age = 2024 - birthYear;
  console.log(age);
}
function isValidVoter(birthYear) {
  const age = 2024 - birthYear;
  console.log(age > 21 ? "Eligible to vote" : "Not eligible to vote");
}

getAge(2002);
isValidVoter(2000);


