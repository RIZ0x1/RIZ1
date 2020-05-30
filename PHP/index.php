<?php
	include_once 'class.php';

	{ // 2
		$str = <<< END
		- Wha... what are you fucking?
		- Im fucking a dooog...
		END;

		echo "{$str}!!!";
	}
	{ // 4
		$hit = null;

		if (empty($hit))
		{
?>
		<div style="background-color:red" style="color:purple" align="center"> <?= "Shit is empty!" ?> </div>
<?php
		}
	}
	{ // 7
		$num1 = 9;
		$num2 = 0.8;
		$num3 = (float)($num1 + $num2);
		
		echo $num3;
	}
	{ // 9
		$number = 18;
		$flag = (float)$number - ($number / 2);

		if ($flag)
			echo "Число нечетное, епта!";
		else
			echo "Число четное, нах!";
		echo "<br/>";
	}
	{ // 10
		echo intval(42 + 0.3);
		echo "<br/>";
		echo floatval("43.05");
		echo "<br/>";
		echo intval(0x5e, 16);
		echo "<br/>";
	}
	{ // 11
		$str = "jo";
		$str = "{$str}pa";
		$$str = "ЫЛЛЛБОООЙИИИИЙОО";
		echo "Переменная jopa создана и равна - $jopa <br/>";
	}
	{ // 12
		$number = 12.5743;
		echo "Before rounding - $number <br/>";
		echo "After rounding - ";
		echo round($number, 3, PHP_ROUND_HALF_UP);
		echo "<br/>";
	}
	{ // 13
		$five = decbin(5);
		$five2 =bindec("101");
		echo $five;
		echo "<br/>";
		echo $five2;
		echo "<br/>";
	}
	{ // 14
		$obj = new Point;
		$obj->x = 5;
		$obj->y = 19;
		$obj->z = 2;

		$fig = Point::$figure;

		echo "FIGURE: $fig <br/>";
		echo "X: $obj->x <br/>";
		echo "Y: $obj->y <br/>";
		echo "Z: $obj->z <br/>";
		unset($obj);
		error_log("PROSTO ERROR BLYA!");
	}
	{ // 15
		$obj2 = new Point;	
		echo "FIGURE2: $fig </br>";
	}
	{ // 15
		$obj3 = $obj2;
		$obj2->x = 666;
		echo $obj3->x; // 666
		echo "<br/>";
	}
	{ // 16
		$obj3 = clone $obj2;
		$obj2->x = 10;
		echo $obj2->x;
		echo "<br/>";
		echo $obj3->x;
	}
	{ // 17
		$obj_one = new Point;
		$obj_two = new Point;

		$obj_one->x = 5;
		$obj_one->y = 9;
		$obj_one->z = 3;

		$obj_two->x = 8;
		$obj_two->y = -5;
		$obj_two->z = -6;

		$d = sqrt(pow($obj_one->x - $obj_two->x, 2) + pow($obj_one->y - $obj_two->y, 2) + pow($obj_one->z - $obj_two->z, 2));
		echo "Расстояние между точками: $d <br/>";
	}
	{ // 18
		define("GHOUL", "Гули и альгули-гули-гули...", false);
		echo "CONSTANT = ";
		echo GHOUL;
		echo "<br/>";
		if (defined("GHOUL")) {
			echo "GHOUL DEFINED";
		}
		echo "<br/>";
	}
	{ // 19
		echo "PHP_VERSION: ".PHP_VERSION;	
	}
	{ // 20
	}
