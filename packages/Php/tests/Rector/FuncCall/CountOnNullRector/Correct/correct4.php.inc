<?php declare(strict_types=1);

namespace Rector\Php\Tests\Rector\FuncCall\CountOnNullRector\Wrong;

use Rector\Php\Tests\Rector\FuncCall\CountOnNullRector\Source\CountableClass;
use stdClass;

$values = [];
$count = count($values);

$values = new CountableClass();
$count = count($values);
