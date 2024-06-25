function getAge(birthYear) {
  const age = 2024 - birthYear;
  console.log(age);
}
function isValidVoter(birthYear) {
  const age = 2024 - birthYear;
  console.log(age > 21 ? "Eligible to vote" : "Not eligible to vote");
}
function isLeapYear(year) {
  console.log(year % 4 === '0' ? "Leap Year" : "Not a leap year");
}
getAge(2002);
isValidVoter(2000);
isLeapYear(2001);
