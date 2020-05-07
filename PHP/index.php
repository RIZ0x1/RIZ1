<?php
	{ // 1
		$text	= "The numbers: ";
		$num	= 0x1f;
		$num2	= -32;
		$num3	= -0x07;
		echo "{$text}$num | $num2 | $num3";
	}
	{ // 2
		$str = <<< END
		Здесь была твоя мамаша. Что она тут делала? Дрочус? Дракочус? Неее, она не такая
		она больше любит анчоус!
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
	}
	{ //7

