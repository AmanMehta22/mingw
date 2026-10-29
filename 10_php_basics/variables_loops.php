<?php
// Variables and operations
$a = 20;
$b = 6;

echo "a = $a and b = $b<br>";
echo "Addition       : " . ($a + $b) . "<br>";
echo "Subtraction    : " . ($a - $b) . "<br>";
echo "Multiplication : " . ($a * $b) . "<br>";
echo "Division       : " . ($a / $b) . "<br>";
echo "Modulus        : " . ($a % $b) . "<br><br>";

// if - else
if ($a > $b)
  echo "$a is greater than $b<br><br>";
else
  echo "$b is greater than or equal to $a<br><br>";

// while loop
$i = 1;
echo "While loop : ";
while ($i <= 5) {
  echo "$i ";
  $i++;
}
echo "<br>";

// for loop
echo "For loop   : ";
for ($j = 1; $j <= 5; $j++) {
  echo "$j ";
}
echo "<br>";

// foreach loop
$colors = array("Red", "Green", "Blue");
echo "Foreach loop : ";
foreach ($colors as $c) {
  echo "$c ";
}
echo "<br>";
?>
