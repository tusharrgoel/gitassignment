function getAge(birthYear) {
  const age = 2024 - birthYear;
  console.log(age);
}
function isValidVoter(birthYear) {
  const age = 2024 - birthYear;
  console.log(age > 21 ? "Eligible to vote" : "Not eligible to vote");
}
function canDrink(birthYear){
    const age = 2024 - birthYear;
    console.log(age > 25 ? "Eligible to drink" : "Not eligible to drink");
}
getAge(2002);
isValidVoter(2000);
canDrink(2001);

