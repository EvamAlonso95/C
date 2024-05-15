<?php

// create a blank image
$image = imagecreatetruecolor(400, 300);

// fill the background color
$bg = imagecolorallocate($image, 255, 255, 255);

// choose a color for the ellipse
$col_ellipse = imagecolorallocate($image, 255, 0, 0);

// draw the white ellipse
imagefilledellipse($image, 200, 150, 300, 200, $col_ellipse);

// output the picture
header("Content-type: image/png");
imagepng($image);

?>