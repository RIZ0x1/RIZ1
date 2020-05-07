<?php
	{ // 3
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
