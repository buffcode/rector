<?php

$version = '1.2.3';
preg_match('#\d\.\d(\.\d)?(-?\S*)?#i', $version, $matches);

if (\count($matches) > 0) {
    $this->version = (string) $matches[0];
}
