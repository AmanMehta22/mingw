<?php
// String functions
$str = "Hello World";
echo "String           : $str<br>";
echo "strlen()         : " . strlen($str) . "<br>";
echo "strtoupper()     : " . strtoupper($str) . "<br>";
echo "strtolower()     : " . strtolower($str) . "<br>";
echo "str_replace()    : " . str_replace("World", "PHP", $str) . "<br>";
echo "substr()         : " . substr($str, 0, 5) . "<br><br>";

// Numeric functions
$x = -7.6;
echo "Number           : $x<br>";
echo "abs()            : " . abs($x) . "<br>";
echo "round()          : " . round($x) . "<br>";
echo "floor()          : " . floor($x) . "<br>";
echo "ceil()           : " . ceil($x) . "<br>";
echo "sqrt(16)         : " . sqrt(16) . "<br>";
echo "pow(2, 5)        : " . pow(2, 5) . "<br>";
echo "max()            : " . max(4, 9, 2) . "<br>";
echo "min()            : " . min(4, 9, 2) . "<br><br>";

// Associative array functions
$marks = array("Ram" => 85, "Shyam" => 92, "Mohan" => 78);
echo "Associative Array: "; print_r($marks); echo "<br>";
echo "count()          : " . count($marks) . "<br>";
echo "array_keys()     : "; print_r(array_keys($marks)); echo "<br>";
echo "array_values()   : "; print_r(array_values($marks)); echo "<br>";
echo "array_key_exists(): " . (array_key_exists("Shyam", $marks) ? "Yes" : "No") . "<br>";
asort($marks);
echo "asort()          : "; print_r($marks); echo "<br><br>";

// Date time functions
echo "date()           : " . date("d-m-Y") . "<br>";
echo "Current time     : " . date("h:i:s A") . "<br>";
echo "time()           : " . time() . "<br>";
echo "Full format      : " . date("D, d M Y H:i:s") . "<br>";
?>
