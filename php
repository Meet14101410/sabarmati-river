<?php
$river = [
    "name" => "Sabarmati",
    "origin" => "Aravalli Range",
    "major_dams" => ["Dharoi Dam", "Vasna Barrage"]
];

echo "<h2>" . $river['name'] . " River</h2>";
echo "Origin: " . $river['origin'] . "<br>";
echo "Key Dams: " . implode(", ", $river['major_dams']);
?>
