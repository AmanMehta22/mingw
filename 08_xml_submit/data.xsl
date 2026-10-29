<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/student">
<html>
<head>
  <title>Student Information</title>
</head>
<body>

<h2>Student Information</h2>

<table border="1" cellpadding="5" cellspacing="0">
  <tr>
    <th>Roll No</th>
    <td><xsl:value-of select="rollno"/></td>
  </tr>
  <tr>
    <th>Name</th>
    <td><xsl:value-of select="name"/></td>
  </tr>
  <tr>
    <th>Course</th>
    <td><xsl:value-of select="course"/></td>
  </tr>
  <tr>
    <th>Semester</th>
    <td><xsl:value-of select="semester"/></td>
  </tr>
  <tr>
    <th>Email</th>
    <td><xsl:value-of select="email"/></td>
  </tr>
</table>

</body>
</html>
</xsl:template>

</xsl:stylesheet>
