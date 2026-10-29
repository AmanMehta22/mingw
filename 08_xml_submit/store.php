<?php
$name   = $_POST['name'];
$email  = $_POST['email'];
$mobile = $_POST['mobile'];

$file = 'data.xml';

if (!file_exists($file)) {
    $newXml = new DOMDocument('1.0', 'UTF-8');
    $newXml->formatOutput = true;
    $newXml->appendChild($newXml->createElement('students'));
    $newXml->save($file);
}

$xml = new DOMDocument();
$xml->load($file);

$root = $xml->getElementsByTagName('students')->item(0);

$student = $xml->createElement('student');
$student->appendChild($xml->createElement('name', htmlspecialchars($name)));
$student->appendChild($xml->createElement('email', htmlspecialchars($email)));
$student->appendChild($xml->createElement('mobile', htmlspecialchars($mobile)));

$root->appendChild($student);

$xml->formatOutput = true;
$xml->save($file);

echo "Information stored successfully in data.xml<br>";
echo "<a href='data.xml'>View data.xml</a>";
?>
