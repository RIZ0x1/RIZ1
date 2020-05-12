<?php
	{ // 1
		$text	= "The numbers: ";
		$num	= 0x1f;
		$num2	= -32;
		$num3	= -0x07;
		echo "{$text}$num | $num2 | $num3 <br/>";
	}
	{ // 2
		$str = <<< END
		- Wha... what are you doing?
		- Evening the odds...
		END;

		echo "{$str}!!!";
	}
	{ //3
		if (isset($str))
		{
			unset($str);
		}
	}
	{ //4
		$hit	= null;

		if (empty($hit))
		{
?>
			<div style="color:orange" align="center"> <?= "Shit is empty!" ?> </div>
<?php
		}
	}
	{ //5
		$hit	= 3.14;
		echo gettype($hit); //double (realy?)
		echo "<br/>";
	}
	{ //6
		if (is_string($text))
		{
			echo "Yes, it is!";
		}
		if (is_double($num2))
		{
			echo "Yes, it is!";
		}
		//...
		echo "<br/>";
	}
	{ //7
		$str = "6.66";
		$str = $str + 3.14;
		echo $str;
	}
	{ // 8
		$str	= 15.55;
		$number	= (int)$str;

	}
	{ // 9
		$number = 17;
		$flag	= (float)($number / 2) - (int)($number / 2);

		if ($flag)
			echo "Число нечетное, блять!";
		else
			echo "Число четное, блять!";
		echo "<br/>";
	}
	{ // 10
		echo intval("43");
		echo "<br/>";
		echo floatval(43 + 0.3);
		echo "<br/>";
		echo intval(0xff, 16);
		echo "<br/>";
	}
	{ // 11
		$str = "loopa";
		$str = "za$str";
		$$str = 666;

		if (isset($zaloopa))
		{
			echo "Переменная залупа создана и равна - $zaloopa";
			echo "</br>";
		}
	}
	{ // 12
		$number = 3.54321;
		echo "Before rounding - $number </br>";
		$number = round($number, 2, PHP_ROUND_HALF_UP);
		echo "After rounding - $number </br>";
	}
	{ // 13
		echo decbin(4252);
		echo "</br>";
		echo decbin(89080);
		echo "</br>";
	}
