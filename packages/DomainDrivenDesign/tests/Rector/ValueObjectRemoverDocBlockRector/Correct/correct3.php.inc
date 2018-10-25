<?php

namespace Rector\DomainDrivenDesign\Tests\Rector\ValueObjectRemoverDocBlockRector\Wrong;

use Rector\DomainDrivenDesign\Tests\Rector\ValueObjectRemoverDocBlockRector\Source\SomeValueObject;

class ThirdActionClass
{
    /**
     * @param null|string $name
     */
    public function someFunction(?SomeValueObject $name): ?SomeValueObject
    {
    }
}
