<?php

  function gotoxy($x, $y) {
      for($i=0; $i < $y; $i++) {
        echo"\n";
      }

      for($i=0; $i < $x; $i++) {
        echo" ";
      }

      echo"o\n";
  }

  $x = 10;
  $y = 20;

  $xX = 1;
  $yY = -1;
  
  $yArray = array();
  $xArray = array();

  for($i = 0; $i < 23; $i++) {
    array_push($yArray, 1);
  }

  $replaceyArray = array(1 => -1, 22 => -1);
  $yArray = array_replace($yArray, $replaceyArray);


  for($i = 0; $i < 80; $i++) {
    array_push($xArray, 1);
  }

  $xArrayDo = array(1 => -1, 79 => -1);
  $xArray = array_replace($xArray, $xArrayDo);


  for(;;) {

    for($i=0; $i < 37; $i++) {
      echo"_";
    }

    echo "x=",$x,"y=",$y;

    for($i=0; $i < 37; $i++) {
      echo"_";
    }

    gotoxy($x, $y);

    $x += $xX;
    $y += $yY;

    $xX *= $xArray[$x];
    $yY *= $yArray[$y];

    sleep(1);
    system('clear');

  }

?>
